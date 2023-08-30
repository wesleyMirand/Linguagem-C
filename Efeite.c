//Com Efeite
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroLido, i;

    printf("Informe o numero:");
    scanf("%i", &numeroLido);

    for(i = 1;  i<=10; i++){
        printf("%i \tx  \t%i \t= \t%i\n", numeroLido, i, numeroLido * i);
    }
    return 0;
}
