#include <string.h> 

int scosh_st() {
    while (1) {
        __builtin_printf("[username@hostname]<>& ");
        char input[100];


        __builtin_scanf("%99s", &input); 

if (strcmp(input, "sls") == 0 ) {
    __builtin_printf("boot5.asm, st2.asm\n");
    return 0;
    }

    }
    return 0;
}



int main() {
    __builtin_printf("Hiii, This code is for a template and so that the file already exists :o\n");
    
    scosh_st(); 
    
    return 0;
}
