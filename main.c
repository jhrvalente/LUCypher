#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ciphers.h"
#include "menu.h"
#include "about.h"
#include <sys/statvfs.h>

#define T_SIZE 512
#define C_SIZE 12

char text[T_SIZE], choice[C_SIZE], *cmd;
int status;

void quitOrRepeat(){
    
    printf("\nDo you wish to quit the program or do you want to use %s again (:q to quit, :r to repeat)?\n", cypher_name);
           scanf("%s[^\n]", &choice);
        if (strcmp(choice, ":r") != 0){
            
            if (strcmp(choice, ":q") == 0){ 
            printf("User pressed :q to close. Program terminated.\n");
            exit(0);
            }
            else{
                printf("\nInvalid option.\n");
                quitOrRepeat();
            }

        }
        else{
            menuList();
        }

}

//main function
int main(int argc, char**argv)
{
    status = 1;

    cmd="echo -e \\033c";
    system(cmd);

    printWelcomeBoard(); 
    
    messagechoice(); 

    fgets(choice, C_SIZE, stdin);
    if (strcmp(choice, "MORE\n")==0) about();
        else if (strcmp(choice, "START\n")==0) menuList();
            else {
                  printf("Invalid option. Program terminated."); 
                  printf("\n"); 
                  exit(0); 
                 }    
    
    while(status)
    {
    printf("\nDo you wish to encrypt or decrypt text?\n"
           "Type E to encrypt or D to decrypt.\n");
    scanf("%s[^\n]", &choice);
        if (strcmp(choice, "E") == 0)
        { 
        printf("\nInsert text to encrypt:\n");
        read(0, text);
        encrypt(text, option);
        printf("\nThis is your text encrypted with %s:\n%s\n", cypher_name, text);
        quitOrRepeat();  
        }
        else if (strcmp(choice, "D") == 0)
        { 
        printf("\nInsert text to decrypt:\n");
        read(0, text);
        decrypt(text, option);
        printf("\nThis is your text decrypted with %s:\n%s\n", cypher_name, text);
        quitOrRepeat(); 
        } 
        else{
            printf("\nInvalid option.\n");
        }
        
        
    }  

    
return 0;
}
