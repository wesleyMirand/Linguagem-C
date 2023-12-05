//comparar string com strcmp as cadeias de caracteres. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
  char nome1[10] = "abc";
  char nome2[10] = "abc";
  int retorno;
  retorno = strcmpo(nome1, nome2);

  //o retorno vai devolver o valor 0->quando as duas strings forem iguais

  printf("%d\n", retorno); //retorno foi zero porque as duas sao iguais

  return 0;
}
