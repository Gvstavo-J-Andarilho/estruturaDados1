/*Ponteiros: relembrando 
Os dois operadores mágicos:
    & (Endereço de): Usado para descobrir qual o endereço de uma variável comum.
    * (Conteúdo de): Usado para criar a variável ponteiro e também para "ir até o endereço" e ver o que tem lá dentro. */

#include <string.h>
#include <stdio.h>

int main()
{   int n=42;
    int *p;
    p = &n;
    printf("Valor de numero: %d\n", n);
    printf("Endereço de numero: %p\n", (void*)&n); // %p mostra o endereço
    printf("Conteudo apontado por p: %d\n", *p);
    *p = 100; //mudando o valor de n com ponteiros
    printf("Conteudo apontado para p(atualizado): %d\n", *p);
    
    return 0;
}