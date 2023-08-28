#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, numero3, maior, menor;

    printf("Digite o numero1:");
    scanf("%i", &numero1);

    printf("Digite o numero2:");
    scanf("%i", &numero2);

    printf("Digite o numero3:");
    scanf("%i", &numero3);

    //encontrando o maior:

    if(numero1 > numero2 && numero1 > numero3) {
        maior = numero1;
    }
    else if(numero2 > numero1 && numero2 > numero3) {
        maior = numero2;
    }
    else {
        maior = numero3;
    }

    printf("Maior = %i\n", maior);

    //encotrando o menor:
      if(numero1 < numero2 && numero1 < numero3) {
        menor = numero1;
    }
    else if(numero2 < numero1 && numero2 < numero3) {
        menor = numero2;
    }
    else {
        menor = numero3;
    }

    printf("Menor = %i\n", menor);

    return 0;
}

