#include "ciphers.h"
#include "caesar.h"
#include <stdio.h>

void encrypt(char *text, EncryptionScheme scheme){
	switch(scheme){
		case 1:
		printf("Define the Shift of the Caesar's Cypher:\n");
		scanf("%d", &shift);
		caesar_E (text, shift);
		break;
		case 2:
		printf("Define the Shift of the Caesar's Cypher:\n");
		scanf("%d", &shift);
		caesarExtended_E (text, shift);
		break;
	}

}

void decrypt(char *text, EncryptionScheme scheme){
	switch(scheme){
		case 1:
		printf("Define the Shift of the Caesar's Cypher:\n");
		scanf("%d", &shift);
		caesar_D (text, shift);
		break;
		case 2:
		printf("Define the Shift of the Caesar's Cypher:\n");
		scanf("%d", &shift);
		caesarExtended_D (text, shift);
		break;
	}
}