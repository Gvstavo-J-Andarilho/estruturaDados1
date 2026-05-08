/*Ponteiros: atividade4Ponteiros
Média (Lógica): Escreva um pequeno programa que troque o valor de duas variáveis (a e b) usando apenas ponteiros para manipulá-las.
*/

#include <string.h>
#include <stdio.h>

int main(){   
    int a=5, b=2, aux=0;
    printf("(inicio)\na: %d | b: %d\n", a, b);
    
    int *ptrA = NULL;
    int *ptrB = NULL;

    ptrA = &a;
    ptrB = &b;

    aux = *ptrA; // guarda o valor de 'a'
    *ptrA = *ptrB; //troca o valor por ponteiro de 'a' por 'b'
    *ptrB = aux;

    printf("(final)\na: %d | b: %d\n", a, b);
    

    return 0;
}