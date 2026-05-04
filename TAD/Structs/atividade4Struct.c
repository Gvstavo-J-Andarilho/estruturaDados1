//Structs: atividade 4
#include <stdio.h>
#include <string.h>


    struct Retangulo { 
        int largura; 
        int altura;
        int area;
    };
    
int main(){
    struct Retangulo r1;
    r1.largura = 12;
    r1.altura = 12;
    r1.area = r1.altura*r1.largura;


    printf("Area: %d u.m.²", r1.area);

    return 0;
}