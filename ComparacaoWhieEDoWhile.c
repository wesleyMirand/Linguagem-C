comparação entre while e do while:
são quase a mesma coisa a unica diferenca é onde é feito o teste condicional. 




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;

    while(i <= 10)
    {
        printf("%i\n", i );
        i++;
    }

    i = 1;
    printf("\n\n");

     do {
         printf("%i\n", i );
         i++;
         } while (i <= 10);

   return 0;
}
