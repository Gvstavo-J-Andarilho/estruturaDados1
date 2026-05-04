/*Difícil (Struct Dinâmica):
Aloque dinamicamente uma struct Produto (nome e preço).
Peça os dados ao usuário (lembre de usar ->) e, ao final, dê um free.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define TRUE 1
#define FALSE 0

typedef struct{
    char nome[100];
    float preco;
} Produto;

int main() {
    Produto *ptrProd=NULL;
    
    ptrProd = (Produto *)malloc(1*sizeof(Produto));
    if(ptrProd==NULL){
        printf("faio");
        return FALSE;
    }
    printf("Nome do produto: ");
    scanf(" %[^\n]s", ptrProd->nome);
    printf("\nPreço do produto: ");
    scanf("%f", &ptrProd->preco);
    
    printf("#        --- Produto ---        #\n");
    printf("\nNome: %s|\nPreço: %.2f|", ptrProd->nome, ptrProd->preco);

    free(ptrProd);
    ptrProd == NULL;
    return 0;
}