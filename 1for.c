#include <stdio.h>
#include <stdlib.h>

int main()
{ /*for variavel de estrutura de controle, designa uma variavel de controle,
     que vai controla cada estrutura de codigo, operador de passo a cada repetição que é executado
     ( i = 1; i <= 10; i++) mostra mil vezes o ola mundo*/
    int i;
    for( i = 1; i <= 1000; i++){ // faz a funcao enquanto e verdadeira
        printf("%i\n", i);//nao confunda os dois i, um é tipo  o outro é var
    }
    return 0;
}
