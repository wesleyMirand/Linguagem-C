//verificar qual é o caractere, se caso o char que analiso pra imprimir foi igual a "\0" entao posso usa um break, para sair do laço de repetição e assim só imprimi oque é valido.

#include<stdio.h>
#include<stdlib.h>

int main() {
   char[51];
   int i ; 

   printf("informe o nome:");
   gets(nome);

   printf("informe o nome: %s \n", nome);//valor pro usuario e o nome da string lida
 
   puts(nome);

   for(i = 0; i < 51; i++) {
       if(nome[1] == '\0')
           break;
       printf("Caractere: %c \n",nome [i]);
       }

  return 0;
 }
