//Structs: lembrando
#include <stdio.h>
#include <string.h>


    struct Livro{
        char titulo[49];
        int paginas;
        float preco;
    };

int main(){
    struct Livro livro1;

    strcpy(livro1.titulo, "Crocodilagem");
    livro1.paginas = 100;
    livro1.preco = 100.00;

    printf("Livro: %s| quantidade de págs: %d| preço: R$%f.2f\n", livro1.titulo, livro1.paginas, livro1.preco);
    return 0;
}