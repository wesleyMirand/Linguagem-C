//valor de strings

#include <stdio.h>
#include <stdlib.h>

int main() 
{
  char nome_cliente[] = {"b", "e", "b", "e"};
  printf("%s", nome_cliente);
 
  return 0;
}
//outra forma e nao colocando atribuicao das caracteres e o tamanho mais no final mostra b, pq nao definiu o tamanho e pegou um lixo da memoria.
