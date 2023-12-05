//comparar string com strcmp as cadeias de caracteres. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
  char nome1[10] = "a";
  char nome2[10] = "b";
  int retorno;
  retorno = strcmpo(nome1, nome2);//retorna um valor menor que 0 quando a string 1 for menor que a string 2. como a vem antes do b  -1, 

  printf("%d\n", retorno); 

  return 0;
}
