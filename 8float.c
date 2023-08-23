#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 = 2, num2 = 5, num3 = 3, resultado;
    resultado = num1 * ((num1 + num2) / num3;//primeiro vai fazer o num1  + num2 entao num3 e depois o num1
    
    printf("%i\n", resultado);
    
    return 0;
}
