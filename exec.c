#include <unistd.h>
#include <stdio.h>

int main(){
    int pid = fork();
    if(pid == 0){
        printf("Hello from child\n");
        execl("./hola", "hola", "pedro", "luis", "mary", (char *)NULL);// inputs (ruta del archivo, nombre del archivo, NULL)
        printf("Esta linea no debe ejecutarse");
    }
    printf("soy el proceso padre\n");
    return 0;
}