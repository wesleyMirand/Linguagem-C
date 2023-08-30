6. Faça um programa que leia um número n e imprima se ele é primo ou não. (um número primo tem apenas 2 divisores: 1 e ele mesmo! O número 1 não é primo!!!)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorLido, i, metade;

    printf("Digite o numero: ");
    scanf("%i", &valorLido);

    metade = valorLido / 2;

    if(valorLido == 1) {
        printf("\n%i nao eh primo!\n\n", valorLido);
        return 0;
    }

    for( i = 2; i <= metade; i++) {
        if(valorLido % i == 0) {
            printf("\n%i nao eh primo!\n\n", valorLido);
            return 0;
        }
    }
    printf("\n%i eh primo!\n\n", valorLido);

    return 0;
}
