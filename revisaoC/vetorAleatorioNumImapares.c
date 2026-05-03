#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int ale = rand() % 101; // limitado de 0 a 100
    int v[10];
    
    for(int i =0; i<10;i++){
        v[i]= ale;
        if(i%2 != 0){
            printf("v[%d] = %d", i, v[i]);
        }printf("\n");
    }

    return 0;
}