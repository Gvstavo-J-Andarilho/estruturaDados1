//Structs: atividade 3
#include <stdio.h>
#include <string.h>


    struct Carro { char marca[20]; };
    
int main(){
    struct Carro c1;
    c1.marca = "Ferrari"; // O erro está aqui pois atribui da forma errada

    strcpy(c1.marca, "Ferrari"); //forma correta de atribuir a marca
    printf("marca: %s", c1.marca);

    return 0;
}