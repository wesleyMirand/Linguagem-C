//estrutura de repetiçaõ while o correto
#include <stdio.h>
#include <stdlib.h>


#define TAM 5

int main()
{
    //tipo nomeVar[tam];
    float vetNotas[TAM], media = 0; //valor da media tenque zero(nada) pq vai somar os valores dentro dela e dividi pela quantidade de valores
    int i;
    for( i = 0; i < TAM; i++) {
            printf("Informe a nota: ");
            scanf("%f", &vetNotas[i]);
    }

     i = 0;
     while(i < 10) {
        media += vetNotas[i];
        i++;
     }
       

        media /=TAM;

    printf("\nMedia = %.2f", media);

    return 0;
} 
