//outra forma é usando o laço while, enquanto na posicao i for diferente de "\0", vou executando o codigo, no final usar o incremento i++ e tenho que da valor pro i la encima int i = 0;. porcausa da strutura do while, diferente do for que ja tem suas estruturas. forma mais simples.

#include<stdio.h>
#include<stdlib.h>

int main() {
   char[51];
   int i = 0 ; //nos outros teste tenque se fora

   printf("informe o nome:");
   gets(nome);

   printf("informe o nome: %s \n", nome);//valor pro usuario e o nome da string lida
 
   puts(nome);

   while(nome[i] != '\0') { //condição while
       printf("Caractere: %c \n",nome [i]);
       i++;
       }

  return 0;
 }
