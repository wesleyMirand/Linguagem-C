3. Faça um programa em C que calcula e escreve a seguinte soma:

soma = 1/1  +  3/2  + 5/3 + 7/4 + ... + 99/50
                          
 /*                        m + 1
                        .------.
  primerio valor  1 / 1 + 3 /2 ----> até o final da divisão criterio de parada
                    ^-------^
                      m + 2                                                   */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i, j = 1, soma = 0;
    for (i = j; i <= 50; i++) {
        printf("%.0f/%.0f", j, i);
        if(i < 50) {
            printf(" + ");
        }
        soma = soma + (j/i);
        j += 2;
    }
    printf(" = %.2f\n\n", soma);
    return 0;
}
