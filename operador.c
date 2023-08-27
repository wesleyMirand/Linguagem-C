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

    /*
    && AND E
    || OR  OU
    !  NOT (operador de negacao) */
                                                                                                                //juncao das duas expressoes o resultado é 0 pq na tabela verdade as duas tenque ser verdadeira
    printf("(%i == %i ==> %i) && (%i == %i ==> %i) ==> %i\n", num1, num2, num1==num2,  num1, num3, num1!=num3, (num1==num2) && (num1!=num3)); //tem muito parametro
        //1primeira parte expresao     ^2parte                  ^1parte                    ^2 parte             se é igual   e   se é diferente

    printf("(%i == %i ==> %i) && (%i == %i ==> %i) ==> %i\n", num1, num2, num1==num2,  num1, num3, num1!=num3, (num1==num2) || (num1!=num3));

    printf("(%i == %i ==> %i) && (%i == %i ==> %i) ==> %i\n", num1, num2, num1==num2,  num1, num3, num1!=num3, !(num1==num2) || (num1!=num3));//vai dar verdadeiro porque o ! vai negaro resultado da operacao

    printf("(%i == %i ==> %i) && (%i == %i ==> %i) ==> %i\n", num1, num2, !(num1==num2),  num1, num3, num1!=num3, (!(num1==num2) || (num1!=num3))); //nega usando !
    return 0;
}
