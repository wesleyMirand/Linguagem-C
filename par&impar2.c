#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroLido;
    printf("Digite o valor:");
    scanf("%i", &numeroLido);

    if(numeroLido % 2 == 0){
        printf("O numero é par");
    }
    else{
        printf("Impar");
    }
    return 0;
}
