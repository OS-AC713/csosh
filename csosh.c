/* The file was created by OS-AC713 and is distributed under the GNU GPLv3.0 license. The project will be located here: https://github.com */
/* WE DO NOT PROVIDE ANY WARRANTY, more details: https://github.com/blob/main/LICENSE or show w */

#include <string.h> 
#include <stdlib.h>

int scosh_st(char *username, char *hostname) {
    
    __builtin_scanf("%*c");

    while (1) {
        
        __builtin_printf("[%s@%s]<>& ", username, hostname);

        char raw_input[250] = {0};
        char cmd[50] = {0};
        char flag[50] = {0};

        
        __builtin_scanf("%199[^\n]", raw_input);
        
        
        __builtin_scanf("%*c");

        
        __builtin_sscanf(raw_input, "%49s %49s", cmd, flag); 


        if (strlen(cmd) == 0) {
            continue;
        }

        // Проверяем команды
        if (strcmp(cmd, "sls") == 0) {
            __builtin_printf("boot5.asm, st2.asm\n");
        }
        else if (strcmp(cmd, "uls") == 0) {
            __builtin_printf("csosh: uls: not found files.\n");
        }
        else if (strcmp(cmd, "cls") == 0) {
            __builtin_printf("Drivers, Bootos, FATsoon\n");
        }
        else if (strcmp(cmd, "linof") == 0) {
            system("python3 linoflinks.py");    
        }
        else if (strcmp(cmd, "mango") == 0) {
            if (strcmp(flag, "2") == 0) {
                __builtin_printf("Okay, you found it, what should you do with it? LMAO\n");
            } else {
                __builtin_printf("mango.. The word mango is similar to magoo :p\n");
            }
        }    
        else if (strcmp(cmd, "exit") == 0) {
            break;
        }
        else if (strcmp(cmd, "show") == 0) {
            if (strcmp(flag, "-w") == 0 || strcmp(flag, "w") == 0) {
                __builtin_printf("We do not give ANY GUARANTEE that the code is safe,\n we DO NOT GIVE ANY GUARANTEE that nothing will be damaged\n");
            }
            else if (strcmp(flag, "-c") == 0 || strcmp(flag, "c") == 0) {
                __builtin_printf("You CAN: modify the code, incorporate it into your projects, download it, distribute it, or recreate it for your own needs.\n YOU CANNOT: remove the license from the main branch, remove attribution from file headers, close the source code (violating the GNU General Public License v3.0), or remove attribution from the project.\n");
            }
            else {
                __builtin_printf("Usage: show [-w | -c]\n");
            }
        }
        else {
            __builtin_printf("csosh: %s: command not found.\n", cmd);
        }
    }
    return 0;
}

int main() {
    __builtin_printf("Hiii, This code is for a template and so that the file already exists :o\n");
    
    char user[50] = {0};
    char host[50] = {0};

    __builtin_printf("Enter your username:  ");
    __builtin_scanf("%49s", user);
    
    __builtin_printf("Great! Enter your hostname: ");
    __builtin_scanf("%49s", host);
    
    __builtin_printf("Load csosh . . .\n");

    scosh_st(user, host);

    return 0;
}

