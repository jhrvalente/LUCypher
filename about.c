#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

char c;
void about(){

    printf("\n\n\e[31m\e[43m\e[1mGENERAL INFO:\n1.This program was developed under the GNU GENERAL PUBLIC LICENSE Version 2.0,  \n"                         
       "from June 1991 (for more information on the specifications of this type of\n"
       "license, please follow this link: \033[4mhttps://www.gnu.org/licenses/gpl-2.0.html)\033[0m\e[31m\e[43m\e[1m \n"
           "2.This program was written to run on consoles with 80*24 of measure. Different  configurations may disconfigure the look of the program\n"
           "3.A list of contributors to the project can be seen in the file 'contributors' \n"
           "within the same project. (Note that Data may be encrypted, use our program to decrypt it and enjoy! \n"
           "4.Suggestions are welcome and you can collaborate with us by sharing your ideas and insights through LUCypher\'s GitHub repository"
           " link: \033[4mhttps://github.com/rptc/LUCypher)\033[0m\e[31m\e[43m\e[1m             \n"
           "\n\033[4mABOUT CAESAR'S CIPHER:\033[0m\e[31m\e[43m\e[1m\n"
           "In cryptography, Caesar's cipher is one of the simplest and most widely known encryption techniques. It is a type of substitution" 
           " cipher in which each letter in the plain text is replaced by a letter some fixed number of positions down the alphabet. For example," 
           " with a left shift of 3, D would be replaced by A, E would become B, and so on. The method is named after Julius Caesar, who used it in his private correspondence\n"
           "\n\033[4mABOUT CAESAR'S CIPHER EXTENDED VERSION:\033[0m\e[31m\e[43m\e[1m\n"
           "The Caesar's Cipher extended version follows the same principles of the original version but encrypts ALL the ASCII elements."
           "This means that if the user inputs a space, a ponctuation market or any other thing, that will be encrypted/decrypted.\n"      
           "______________________________________________________________________ May 2015\033[0m\n"                                        
           "\x1b[31m********************************************************************************\x1b[39;49m\n"
           "Type S to jump to encryption schemes menu list!\n");
    c=getchar();
    if (c=='S') menuList(); 
    else {
            printf("Invalid option. Program terminated."); 
            printf("\n");           
            exit(0);
         }
}

void messagechoice(){
printf("\e[31m\e[43m\e[1m \033[4m\e[37m\e[45mLUCypher 1.0\033[0m\e[31m\e[43m\e[1m is a relatively simple console program (written in C Programming\n"
       "language) that allows the user to Encrypt or Decrypt a message by making use of some well known"
       " cyphers and encryption schemes.\n"
       "\nWrite MORE to know more about the project and ciphers.\n"
       "Write START to run the program.\033[0m\n"                                       
       "\x1b[31m********************************************************************************\x1b[39;49m"     
       "________________________________________________________________________________\n");                                      
       
}
