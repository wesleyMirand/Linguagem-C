#include <stdio.h> //Operador Tenario quando nao executa if e else
#include <stdlib.h>

int main()
{
    int numeroLido, numeroParaAlterar = 0;
    printf("Digite o valor:");
    scanf("%i", &numeroLido);

    numeroLido >= 0 ? numeroParaAlterar ++  : numeroParaAlterar --;

    printf("%i\n\n", numeroParaAlterar);

    return 0;
}
