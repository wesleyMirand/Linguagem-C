#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    fflush(stdin);

    printf("Digite a operacao: ");
    scanf(" %c", &operacao);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    switch(operacao) {
           case'+':
                  resultado = numero1 + numero2;
           break;
           case'-':
                  resultado = numero1 - numero2;
           break;
           case'*':
                  resultado = numero1 * numero2;
           break;
           case'/':
                   if(numero2 != 0) {
            resultado = numero1 / numero2;
         }
         else{
            printf("Divisão por zero. ERRo \n!");
            return 0;
         }
           break;
           default:
            printf("operacao nao reconhecida");
        return 0;
    }
        printf("%.2f %c %.2f = %.2f\n\n", numero1, operacao, numero2, resultado);
    return 0;
}
