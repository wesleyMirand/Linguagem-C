//com laço while

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i = 1, j = 1, soma = 0;
    while(i <= 50 ){
        printf("%.0f/%.0f", j, i);
        if(i < 50) {
            printf(" + ");
        }
        soma = soma + (j/i);
        i++;
        j += 2;
    }
    printf(" = %.2f\n\n", soma);
    return 0;
}
