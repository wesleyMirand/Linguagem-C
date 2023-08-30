#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    while (i<=1000){
            printf("%i\n", i);
            if(i == 10) {
                break; //enterrompe o codigo
            }
            i++;
    }

    printf("\n%i\n", i);

   return 0;
}
