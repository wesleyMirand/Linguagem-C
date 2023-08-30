1. Escreva um programa em C que lê 15 valores reais, encontra o maior e o menor deles e mostra o resultado.

/*
no for : 2                            3    4            5        1
       maior=2; 3 é + que 2 = sim     3;  SIm 4;      Sim5;      nao;      5 maior
       menor=2;    menor?             n;   n;           n;       sim 1;    1 menor
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valorLido, maior, menor;
    for(i = 0; i < 15; i++){
        printf("Digite o valor: ");
        scanf("%i", &valorLido);
        if(i == 0) {
            maior = valorLido;
            menor = valorLido;
        }
        else
        {
            if(valorLido > maior) {
                maior = valorLido;
            }
            if(valorLido < menor) {
                menor = valorLido;
            }
        }
    }
    printf("\nMenor= %i \nMaior = %i\n\n", menor, maior);
    return 0;
}
