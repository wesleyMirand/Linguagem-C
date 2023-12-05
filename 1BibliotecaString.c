#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
  char nome1[10] = "wesley";
  char nome2[10];
 
  strcpy(nome2, "wesley dos santos"); //consigo copia o conteudo de uma string e tbm qualquer conteudo que eu colocar entre aspas simples.

  puts(nome2);

  return 0;
}
