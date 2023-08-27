#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroLido;
    printf("Digite o valor:");
    scanf("%i", &numeroLido);

    if(numeroLido % 2 == 0)
        printf("Par");
    else
        printf("Impar");
    //Teste ? valorSeVerdadeiro : valorSeFalso;
    
    numeroLido % 2 == 0 ? printf("Par") : printf ("Impar");
    return 0;
}
