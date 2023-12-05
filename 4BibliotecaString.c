//strcat para concatenar conteudo da var para outra as var tenque ser string 
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int main() {
   char nome1[30] = "Curso";
   char nome2[20] = "linguagem C";

   strcat(nome1, nome2); //destino vai concatenar o seu proprio conteudo o valor da origem se por nome 1 vai ser todos nome 1 nome 2 todos nome 2 e origem, no caso juntar os dois nome

   puts(nome1);   

   return 0;
}
