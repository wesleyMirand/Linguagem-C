//contando os caracteres

#include<stdio.h>
#include<stdlib.h>

int main() {
   char palavra[100];
   int i = 0;
   int conunt = 0;
   printf("informe a palavra:");
   gets(palavra);
   for( i = 0; palavra[i] != '\0'; i++) {
       count ++ ; //quando sair for eu ja sei a quantidade de char que a string vai possuir.acumulando quantidade de var, pra nao perde o valor usar o count, mais fica por opção escolher.
       }

   printf("i = %d - count = %d\n", i, count);//eles tem o mesmo valores, podemos utilizar a var de controla i++ vai ter o mesmo maximo de char de controle até o \0
   
   return 0;
}
