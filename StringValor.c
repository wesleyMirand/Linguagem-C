#include<stdio.h>
#include<stdlib.h>

int main() {
   char[51];
   int i ; 

   printf("informe o nome:");
   gets(nome);

   printf("informe o nome: %s \n", nome);//valor pro usuario e o nome da string lida
 
   puts(nome);

   for(i = 0; i < 8; i++) {
       printf("Caractere: %c \n",nome [i]);
       }//imprimiu cada caracter do nome

  return 0;
 }
