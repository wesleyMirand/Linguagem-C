#include <stdio.h>
#include <stdlib.h>
#include<conio.h>




int main() {

int ano;
printf("Digite quantos anos esta passando isso entre 1, 2, 3:");
scanf("%i", &ano);

switch(ano) {
case 1:
    printf("voce vai passar por isso!");
    break;
case 2:
    printf("voce esta passando por uma fase vai tudo ficar bem");
    break;
case 3:
    printf("voce vai se torna muito bom!");
    break;
default:
    printf("nenhum dos isso significa que voce esta muito bom!");
}
    return 0;
}
