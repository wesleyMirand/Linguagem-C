#include <stdio.h>
#include <stdlib.h>

int main()
{
    //operadores relacionais responsaveis pelas comparacoes de expressoe
    int num1 = 10, num2 = 5, num3 = 3;
    /*
    > maior
    >= maior igual
    <menor
    <= menor igual
    ==igualdades
    !=Diferente
    */
    printf("0 ==> Falso\n 1 ==> True\n\n");//comparacoes retornam 0 para falso e depois retorna para true
    printf("%i >  %i ==> %i\n", num1, num2, num1>num2);//se o numero 1 é maior que o num 2, o 0 representa falso e 1 verdadeiro.
    printf("%i >= %i ==> %i\n", num1, num2, num1>=num2);// maior ou igual
    printf("%i <  %i ==> %i\n", num1, num2, num1<num2);//MENOR
    printf("%i <= %i ==> %i\n", num1, num2, num1<=num2);//MENOR IGUAL
    printf("%i == %i ==> %i\n", num1, num2, num1==num2);//IGUALDADE
    printf("%i != %i ==> %i\n", num1, num2, num1!=num2);//DIFERENTE
    return 0;
}
