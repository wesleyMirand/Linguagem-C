//tabuada com do while

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroLido, i = 1;

    printf("Informe o numero:");
    scanf("%i", &numeroLido);

    do{
        printf("%i \tx  \t%i \t= \t%i\n", numeroLido, i, numeroLido * i);
        i++;
    }while(i <= 10);

    return 0;
}
