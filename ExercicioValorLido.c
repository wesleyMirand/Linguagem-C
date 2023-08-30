5. Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valorLido, soma = 0;

    for(i = 0; ; I++){
       printf("Digite o valor: ");
       scanf("%i", &valorLido);
       if(valorLido == -1) {
           break;
       }
       soma += valorLido;
    }
    printf("\nO resultado da soma: %i\n\n", soma);

    return 0;
}
