//tabuada com while 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroLido, i = 1;

    printf("Informe o numero:");
    scanf("%i", &numeroLido);

    while(i <= 10) {
        printf("%i \tx  \t%i \t= \t%i\n", numeroLido, i, numeroLido * i);
        i++;
    }
    return 0;
}
