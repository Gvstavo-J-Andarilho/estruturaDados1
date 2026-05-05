//Structs: atividade 1
#include <stdio.h>
#include <string.h>


    struct Pessoa{
        char nome[50];
        int idade;
    };

int main(){
    struct Pessoa pessoa1;

    strcpy(pessoa1.nome, "João");
    pessoa1.idade = 42;
;

    printf("Nome: %s| idade: %d|\n", pessoa1.nome, pessoa1.idade);
    return 0;
}