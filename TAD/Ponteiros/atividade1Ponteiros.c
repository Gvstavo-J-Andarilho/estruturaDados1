/*Ponteiros: atividade1*/

#include <string.h>
#include <stdio.h>

int main()
{   float preco = 99.99;
    float *ptrPreco = NULL;
    ptrPreco = &preco;

    printf("Valor de preco: %.2f\n", preco);
    printf("Endereço de preco: %p\n", (void*)&ptrPreco); // %ptrPreco mostra o endereço
    printf("Conteudo apontado por ptrPreco: %.2f\n", *ptrPreco); // 
    *ptrPreco = 105.50; //mudando o valor de preco com ptrPreco
    printf("Conteudo apontado para ptrPreco(atualizado): %.2f\n", *ptrPreco);
    
    return 0;
}