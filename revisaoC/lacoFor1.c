#include <stdlib.h>
#include <stdio.h>

int main(){
    int resultado;
    for(int i = 1; i<=10; i++){
        resultado = i*5;
        printf("5 x %d = %d\n", i, resultado);
    }
    return 0;
}