#include "menu.h"
#include <stdio.h>
#include "ciphers.h"

void menuList(){

printf("\n\nChoose an Encryption Scheme\n"
        "1. Caesar's cypher\n"
        "2. Caesar's cypher (Extended)\n");
    
scanf("%d", &option);
   
    switch(option){
        case 1:
        cypher_name="Caesar's Cypher";
        break;
        case 2:
        cypher_name="Caesar's Cypher (Extended)";
        break;
    }

}
void printWelcomeBoard(){
printf("\e[0;32m________________________________________________________________________________\e[0m\n"
       "                                                                                \n"
       "\e[0;34m\033[1mWelcome to LUCypher 1.0\033[0m                                  \n"
       "________________________________________________________________________________\n"
       "\n\x1b[31m********************************************************************************\x1b[39;49m");

}
