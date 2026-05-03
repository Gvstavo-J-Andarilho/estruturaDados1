#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero=0;
    printf("Digite um numero para saber se é par ou impar: ");
    scanf("%d", &numero);
    if(numero %2 == 0){
        printf("É par");
    }else{
        printf("É impar");
    }
    return 0;
}