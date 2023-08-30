2. Faça um programa em C para exibir a tabuada de 1 a 10.

/*tabuada do 2 x 1 2 3 4 5 ... (primeiro for vai controlar o primeiro valor) depois 3 4 5 6 essa é a ideia de dois for */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j;
    for( i = 1; i <= 10; i++) {
        for (j = 0; j <= 10; j++) {
            printf("%i\t * \t %i \t = \t %i\n", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}
