
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
    //tipo nomeVar[tam];
    float vetNotas[TAM], media = 0; //valor da media tenque zero(nada) pq vai somar os valores dentro dela e dividi pela quantidade de valores
    int i;
    vetNotas[0] = 5.9;//primeira posição dice zero valor 1
    vetNotas[1] = 6;

    for(i = 0; i < TAM; i++){
        media += vetNotas[i];
    }
        media /=TAM;

    printf("%.2f", media);

    return 0;
}
