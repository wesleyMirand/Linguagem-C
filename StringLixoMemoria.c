#include<stdio.h>
#include<stdlib.h>

int main() {
   char[51];
   int i ; 

   printf("informe o nome:");
   gets(nome);

   printf("informe o nome: %s \n", nome);//valor pro usuario e o nome da string lida
 
   puts(nome);

   /*for(i = 0; i < 8; i++) {
       printf("Caractere: %c \n",nome [i]);
       } 
   imprimiu cada caracter do nome   */

   for(i = 0; i < 51; i++) {
       printf("Caractere: %c \n",nome [i]);
       }//imprimi até o fim do nome e depois so tras o lixo de memoria em 51 vezes, quando usamos cadeia de char, percorremos até o fim da string

  return 0;
 }
