//variacao metodo strcat realizar concatenacao, especifica quantidade de char de origem
#include<stdio.h> 
#include<stdlib.h>
#include<stdlib.h>

int main() {

   char nome1[30] = "Curso";
   char nome2[40] = "de linguagem C e java";//pegar a primeira parte da string até o "c"

   strncat(nome1, nome2, 15); //pondo em nome 1 os primeiro 15 char da string

   puts(nome1);   

   return 0;
}
