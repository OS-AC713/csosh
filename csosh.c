#include <string.h> 
#include <stdlib.h>

int scosh_st(char *username, char *hostname) {
    

    char prompt[250];
    __builtin_sprintf(prompt, "[%s@%s]<>& ", username, hostname);
    
    while (1) {
       __builtin_printf("%s", prompt);
        char input[100];


        __builtin_scanf("%99s", input); 

    if (strcmp(input, "sls") == 0 ) {
        __builtin_printf("boot5.asm, st2.asm\n");
    }
 
 
 
   else if (strcmp(input, "uls") == 0 ) {
        __builtin_printf("csosh: uls: not found files.\n");
    }



    else if (strcmp(input, "cls") == 0) {
        __builtin_printf("Drivers, Bootos, FATsoon\n");
    }



    else if (strcmp(input, "linof") == 0) {
        system("python3 linoflinks.py");    /*Guys, these are temporary workarounds. Later, I'll replace all the libraries and this command itself so that it works within the system. :p*/
    }
 

    else if (strcmp(input, "mango") == 0) {
        __builtin_printf("mango.. The word mango is similar to magoo :p\n");
    }    
    else if (strcmp(input, "exit") == 0) {
        break;
    }
    
    else {
        __builtin_printf("scosh: command not found.\n");
    }
    }
    return 0;
}





int main() {
    __builtin_printf("Hiii, This code is for a template and so that the file already exists :o\n");
    
    char user[50];
    char host[50];

    __builtin_printf("Enter your username:  ");
    __builtin_scanf("%49s", user);
    
    __builtin_printf("Great! Enter your hostname: ");
    __builtin_scanf("%49s", host);
    
    __builtin_printf("Load scosh . . .\n");

    scosh_st(user, host);

    return 0;
}
/* заберите у меня си, я бездарь :p*/
