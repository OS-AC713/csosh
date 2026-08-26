#include <string.h> 
#include <stdlib.h>

int scosh_st() {
    while (1) {
        __builtin_printf("[username@hostname]<>& ");
        char input[100];


        __builtin_scanf("%99s", input); 

    if (strcmp(input, "sls") == 0 ) {
        __builtin_printf("boot5.asm, st2.asm\n");
    }
    if (strcmp(input, "uls") == 0 ) {
        __builtin_printf("csosh: uls: not found files.\n");
    }
    if (strcmp(input, "cls") == 0) {
        __builtin_printf("Drivers, Bootos, FATsoon\n");
    }
    if (strcmp(input, "linof") == 0) {
        system("python3 linoflinks.py");    /*Guys, these are temporary workarounds. Later, I'll replace all the libraries and this command itself so that it works within the system. :p*/
    }    
    else {
        __builtin_printf("csosh: command not found.");
    }
    }
    return 0;
}





int main() {
    __builtin_printf("Hiii, This code is for a template and so that the file already exists :o\n");
    
    scosh_st(); 
    
    return 0;
}
/* заберите у меня си, я бездарь :p*/
