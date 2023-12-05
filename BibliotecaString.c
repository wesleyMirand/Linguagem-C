#include<stdio.h>
#include<stdlib.h>
#include<string.h>//Usar todas funcoes do string concatenar,manipular, juntas duas string, descobri o tamanho sem o for com metodo pronto e medir , realizar comparações com strcnp etc..

int main() {
  char nome1[10] = "gilseone";
  char nome2[10];

  //nome2 = nome1; vai dar erro
   
  strcpy(nome2, nome1); // o certo(Destino, Origem) para onde vai ser copiar e de onde vai ser.

   puts(nome2);//copio para o nome 2  

  return 0;
}
