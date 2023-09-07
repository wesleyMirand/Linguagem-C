#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  numero, numero1, restoDiv;
    printf("Digite o numero: ");
    scanf("%i", &numero);

    printf("Digite o numero1: ");
    scanf("%i", &numero1);

    if(numero < numero1 )
         return 0;

    restoDiv = numero % numero1;
    printf("%i\n", restoDiv);

    if(restoDiv % 2 == 0)
       printf("Par\n");
    else
        printf("Impart\n");

    return 0;
}
