/*Média (Integração):
Crie um programa que pergunte ao usuário quantos números ele deseja armazenar.
Aloque um array dinâmico desse tamanho, preencha-o com números lidos do teclado e depois mostre-os na tela.*/

#include <stdio.h>
#include <stdlib.h> 
#define TRUE 1
#define FALSE 0

int main() {

    int tamVet=0, i=0;
    int *ptrV=NULL;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &tamVet);
    if(tamVet < 1){
        printf("Quer bagunçar?\nSai daqui meo!");
        return FALSE;
    }
    ptrV = (int *)malloc(tamVet*sizeof(int)); //aloquei
    if(ptrV==NULL){//testei
        printf("Faio\nSai daqui meo!");
        return FALSE;
    }
    for(i=0; i<tamVet; i++){
        printf("Escreva o elemento v[%d] ", i+1);
        scanf("%d", (i+ptrV));
    }
    for(i=0; i<tamVet; i++){
        printf("v[%d] = %d\n", i+1, ptrV[i]);
    }

    free(ptrV);
    ptrV=NULL;
    return TRUE;
}