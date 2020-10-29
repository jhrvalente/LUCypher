#include "caesar.h"
#include <string.h>

//function that ciphers input text
void caesar_E (char *text, int shift)
{
    int i, k;
    char* res;

    for (i=0; text[i]!='\0'; i++)
    {
    if ((text[i]>='A' && text[i]<='Z')) text[i] = 'A' +((text[i]-'A'+shift)%(26));
    else if ((text[i]>='a' && text[i]<='z')) text[i] = 'a' +((text[i]-'a'+shift)%(26));
    else {
	    caesar_E(&text[i+1], shift);
        memmove(&text[i], &text[i + 1], strlen(text) - i);
        break;
    }
    }
    
}
//function that deciphers the input text
void caesar_D (char *text, int shift)
{
int i;
for (i=0; text[i]!='\0'; i++)
    {
    if ((text[i]>='D' && text[i]<='Z')) text[i] = 'D' +((text[i]-'D'-shift)%(26));
    else if ((text[i]>='d' && text[i]<='z')) text[i] = 'd' +((text[i]-'d'-shift)%(26));
    else if ((text[i]>='a' && text[i]<='c')) text[i] = 'z' -(('z' - text[i]+shift)%(26));
    else if ((text[i]>='A' && text[i]<='C')) text[i] = 'Z' -(('Z' - text[i]+shift)%(26));
    else {
        
        caesar_D(&text[i+1], shift);
        memmove(&text[i], &text[i + 1], strlen(text) - i);
        break;
    }
    }
     
}

//function that ciphers input text
void caesarExtended_E (char *text, int shift)
{
    int i;
    for (i=0; text[i]!='\0'; i++)
    {
    if ((text[i]>=' ' && text[i]<='~')) text[i] = ' ' +((text[i]-' '+shift)%(95));
    else {
        caesarExtended_E(&text[i+1], shift);
        memmove(&text[i], &text[i + 1], strlen(text) - i);
        break;
    }
    }
    
}
//function that deciphers the input text
void caesarExtended_D (char *text, int shift)
{
int i;
for (i=0; text[i]!='\0'; i++)
    {
    if ((text[i]>='#' && text[i]<='~')) text[i] = '#' +((text[i]-'#'-shift)%(95));
    else if ((text[i]>=' ' && text[i]<='"')) text[i] = '~' -(('~' - text[i] + shift)%(95));
    else {
	   caesarExtended_D(&text[i+1], shift);
       memmove(&text[i], &text[i + 1], strlen(text) - i);
       break;
    }
    }
    
}

