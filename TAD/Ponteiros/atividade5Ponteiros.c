/*Ponteiros: atividade5Ponteiros
Difícil (Struct + Ponteiro): Lembra das structs? Crie uma struct Produto.
 Crie um ponteiro para essa struct e tente acessar um campo dela usando o operador -> (ex: ponteiro->preco).
Obs: O operador seta -> é o atalho usado em C para acessar membros de structs através de ponteiros!
*/

#include <string.h>
#include <stdio.h>

struct Produto{
    char nome[50];
    float preco;
    int codigo;
};


int main(){   
    struct Produto p1; 
    
    struct Produto *ptrP1 = NULL; // o ponteiro é do tipo que está apontando 'struct Produto *'
    ptrP1 = &p1;

    strcpy(p1.nome,"Arroz");
    p1.preco = 20.05;
    p1.codigo = 123;
    printf("Nome: %s | Preco: R$%.2f | Código: %d\n", p1.nome, p1.preco, p1.codigo);

    printf("Acessando dados da struct por ponteiro '->': Nome: %s | Preco: R$%.2f | Código: %d\n", ptrP1->nome, ptrP1->preco, ptrP1->codigo);
    
    return 0;
}