#include <stdio.h>
#include <stdlib.h>
#include <locale>

void main () {
    //Permite usar acentos
    setlocale(LC_ALL, "");

    //imprime Ola
    printf("Ola \n");

    int a = 50;
    printf("O valor de a a é: %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para = %d", a);
}
