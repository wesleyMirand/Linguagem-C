//ja aqui é um grande exemplo que o while nao executa pq testa de primeira, ja o do while executa pq primeito, testa e depois executa
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 12;

    while(i <= 10)
    {
        printf("%i\n", i );
        i++;
    }

    i = 12;
    printf("\n---------------------------\n");

     do {
         printf("%i\n", i );
         i++;
         } while (i <= 10);

   return 0;
