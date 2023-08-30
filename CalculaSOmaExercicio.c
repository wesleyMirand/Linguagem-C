4. Faça um programa em C que calcula a soma dos números digitados pelo usuário. O programa em C deve permitir que o usuário digite uma quantidade não determinada de números. O programa em C encerra quando o usuário digita o valor -1;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorLido = 0, soma = 0;
    
    while(ValorLido != -1) {
        printf("Digite o valor: ");
        scanf("%i", &valorLido);
        soma += valorLido;
    } 
    printf("\n O resultado da soma: %i\n\n", soma);
    
    return 0;
}
