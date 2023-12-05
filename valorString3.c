//valor de strings

#include <stdio.h>
#include <stdlib.h>

int main() 
{
  char nome_cliente[] = "BBZINHO";
  print("%s", nome_cliente);
 
  return 0;
}

/* sem lixo, pq a quantidade char armazenada é calculada automaticamente, o vetor vai ter a dimensão exata para conseguir comporta a string que estamos fazendo atição do valor da var, valor atribuido, 6 caracteres pq o tamanho é 7 o minimo tenque ter 7 posição e isso é feito automaticamente pela linguagem e ela ja coloca o barra zero. 
  char nome_cliente[] = "BBZINHO";
  char nome_cliente[7] = "BBZINHO";
as duas seriam a mesma coisa. */
