
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 = 2, num2 = 5, num = 3;
    
    num1 = num1 + num2; //guardar o resultado no num1. num1(primeiro) = (atribui) num1 +(soma) num2; o num1 possui 7
    num1 += num2; //pega o resultado da direita e soma com a esquerda e guardo resultado com a que esta na esquerda
    
    num1 = num1 - num2;
    num 1 -=num2;//mesma logica do acima
    
    num1 = num1 * num2;
    num1 *= num;//mesma coisa dos de cima
    
    num1 = num1/ num2;// podemos usar qualquer uma dessas formulas e facilitam a entrada do nosso codigo
    num /= num2;// mesma coisa 
    
    printf("%i\n", num1); //mostro resultado 7
    return 0;
}
