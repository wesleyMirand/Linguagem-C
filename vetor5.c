//sem { } 

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

    for(i = 0; i < TAM; i++) //tirar chave conceito, tem bloco limitado por chave uma linha pra for pode ficar sem
        media += vetNotas[i];

        media /=TAM;

    printf("\nMedia = %.2f", media);

    return 0;
}
