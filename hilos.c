#include <stdio.h>
#include <pthread.h>

void * printHeelo(void * arg){
    int hid = *((int *) arg);
    printf("hola desde el hilo [%d]\n",hid);
    pthread_exit(NULL);
}

int main(){
    int numThreads = 20;
    pthread_t threadStatus[numThreads];
    int hids[numThreads];
    for(int i = 0;i<numThreads;i++){
        hids[i] = i;
        pthread_create(&threadStatus[i],NULL,printHeelo,(void *)&hids[i]);
    }
    pthread_exit(NULL);
    printf("Hola desde el main");
}