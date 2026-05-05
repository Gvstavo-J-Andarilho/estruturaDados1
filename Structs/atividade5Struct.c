//Structs: atividade 5
#include <stdio.h>
#include <string.h>


    struct Estudante { 
        char nome[50]; 
        float nota1;
        float nota2;
        float nota3;
        float media;
    };
    
int main(){
   
    struct Estudante e1;
    
    strcpy(e1.nome, "Gustavo");

    printf("Escreva a nota 1: ");
    scanf("%f", &e1.nota1);
    printf("Escreva a nota 2: ");
    scanf("%f", &e1.nota2);
    printf("Escreva a nota 3: ");
    scanf("%f", &e1.nota3);
    e1.media = ((e1.nota1 + e1.nota2 + e1.nota3)/3);
    printf("Aluno: %s | Média: %2.f", e1.nome, e1.media);

    

    return 0;
}