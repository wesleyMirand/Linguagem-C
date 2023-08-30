#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for( i = 100; i <= 200; i++) {
            printf("%i", i);
            i= 300;
    }
    printf("%i\n", i);
    return 0;

}
