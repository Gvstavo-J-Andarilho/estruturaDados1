#include <stdio.h>
#include <stdlib.h> // pra malloc e free
#define TRUE 1
#define FALSE 0

int main() {
    int *p;
    int quantidade = 5;

    // Alocando memória para 5 inteiros
    /*(tipo *) malloc(quantidade * sizeof(tipo))   */
    p = (int *) malloc(quantidade * sizeof(int));

    if (p == NULL) {
        printf("Erro: Memória insuficiente!");
        return FALSE;
    }else{
    // Usando como um array comum
    for (int i = 0; i < quantidade; i++) {
        *p(i*quantidade) = i * 10;
        printf("%d ", p[i]);
        }
    // Liberando a memória
    free(p); 
    }
    return TRUE;
}