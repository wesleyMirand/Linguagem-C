#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  numero1, numero2, restoDiv;
    printf("Digite o numero1: ");
    scanf("%i", &numero1);

    printf("Digite o numero2: ");
    scanf("%i", &numero2);

    if(numero1 < numero2 )
         return 0;

    restoDiv = numero1 % numero2;
    printf("%i\n", restoDiv);

    if(restoDiv % 2 == 0)
       printf("Par\n");
    else
        printf("Impart\n");

    return 0;
}

