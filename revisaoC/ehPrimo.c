#include <stdlib.h>
#include <stdio.h>

int main(){
    int ehprimo=1, num;
    printf("Escreva um numero pra saber se é primo: ");
    scanf("%d", &num);

    if(num<=1){
        printf("N eh primo\n");
        return 0;
    }else if(num == 2){
        printf("Eh primo\n");
        return 0;
    }
    else if(num%2 == 0){
        printf("N eh primo\n");
        return 0;
    }else{
        for(int i = 3; i*i <= num; i+=2){
            if(num % i==0){
                ehprimo = 0;
                break;
            }
        }
    }
    if(ehprimo){
        printf("Eh primo\n");
    }else{
        printf("Nao eh primo\n");
    }
    return 0;
}