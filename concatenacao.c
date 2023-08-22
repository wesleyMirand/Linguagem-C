
e agora oque é e como funciona concatenacao, definicao, impressao e a leitura de variaveis.

oque e variaveis, sao caixas que guardam valor la dentro, var tipo inteiro, e \n pula linha, concatenacao quando quer apresentar texto, numero diversas variaveis( procura os %d e depois ve a ordem "depois do , a ", 

#include <stdio.h>
#include <stdlib.h>

void main () {

    //definindo var
    int a = 5, b;

    //imprimindo a var "A"
    printf("%d, a");


    //concatenando
    printf("\nO valor da var a eh: %d", a);

    //mudando o valor de a
    a = 15;

    //lendo valores
    scanf("%d", &b);

    //concatenando
    printf("\nO valor da var b eh: %d", b);

    //pula linha
    printf("\n");

    //imprime
    printf("\n\nuhuuu");

    //pausando
    system("pause");

    }

