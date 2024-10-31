#include <stdio.h>

// char **argv es la lista de apuntadores, un apuntador de apuntadores
int main(int argc, char **argv){

    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}