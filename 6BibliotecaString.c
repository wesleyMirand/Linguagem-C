//concatenando 3 var
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int main() {
   char nome1[30] = "Curso";
   char nome2[20] = "linguagem C";
   char nomeCompleto[30];

   strcat(nomecompleto, nome1); 
   strcat(nomecompleto, nome2);

   puts(nomecompleto);  //pegou lixo na memoria. 

   return 0;
}
