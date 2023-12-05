//nao queremos copiar a string tod so uma parte com strcpy copiamos toda, agora uma parte usamos strncpy com essa funcao, vai ser destino, origem e o size quantidade de caracteres que quero efetuar a copia. Se eu mandar copia so 4 letra vai copiar so 4.
  
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
   char nome1[10] = "wesley";
   char nome2[10];
   int posiçãoFinal = 4;//para mostra até onde vai.

   strncpy(nome2, nome1, 4);//vai pegar so 4 letras
   nome2[posicaoFinal] = '\0';   //'\0' serve para delimitar até onde vai

   puts(nome2);

   return 0;
}
