/*Desafio (Ponteiro de Ponteiro):
Se malloc retorna um endereço, e você quer guardar esse endereço em um ponteiro,
o que aconteceria se você quisesse criar uma "matriz" dinâmica (um array de ponteiros)?
Tente descrever ou codificar como seria a alocação de 3 strings dinâmicas.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define TRUE 1
#define FALSE 0
#define N 2
int main() {
    int *ptrV=NULL;
    ptrV= (int *)malloc(sizeof(int));
    if(ptrV==NULL){
        printf("quebrou véi");
        return FALSE;
    }
    int **ptrV=NULL;
    *ptrV= (int **)malloc(sizeof(int *));
    if(*ptrV==NULL){
        printf("quebrou véi");
        return FALSE;
    }
    

    free(ptrV);
    free(*ptrV);
}