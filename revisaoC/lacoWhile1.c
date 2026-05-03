#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero=1;
    while(numero!=0){
        printf("\nEscreva um numero(se num = 0 o programa para): ");
        scanf("%d", &numero);
    }
    printf("fim!");
    return 0;
}