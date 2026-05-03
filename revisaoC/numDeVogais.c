#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i=0,j=0, cont=0, tamStr=0, tamVog=0;
    char frase[] = "Eu to invicto porraaa caralhooo";
    char vogais[] ="aAeEiIoOuU" ;
    tamStr = strlen(frase);
    tamStr = tamStr+1;
    tamVog = strlen(vogais);
    tamVog = tamVog+1;

    for(i=0; i<tamStr; i++){
        for(j=0; j<tamVog;j++){
            if(frase[i]==vogais[j]){
                cont++;
                break;
            }
        }
    }

    printf("O total de vogais é: %d", cont-1);
    return 0;
}