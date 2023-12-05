
#include<stdio.h>
#include<stdlib.h>

int main() {
   char[51];
   int i ; 

   printf("informe o nome:");
   gets(nome);

   printf("informe o nome: %s \n", nome);//valor pro usuario e o nome da string lida
 
   puts(nome);

   for(i = 0; nome[i] != '\0'; i++) {//testa enquanto é diferente do char, delimitador decrinal da string.
       printf("Caractere: %c \n",nome [i]);
       }

  return 0;
 }
