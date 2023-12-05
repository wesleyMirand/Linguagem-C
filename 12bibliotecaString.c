//comparar string com strcmp as cadeias de caracteres. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
  char nome1[10] = "b";
  char nome2[10] = "a";
  int retorno;
  retorno = strcmpo(nome1, nome2);//seria um pelo valor positivo se for um valor maior que 0 significa que a string um e maior que 2. o b esta depois do a no alfabeto.

  printf("%d\n", retorno); 

  return 0;
}
