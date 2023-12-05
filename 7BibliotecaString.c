#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int main() {
   char nome1[30] = "Curso";
   char nome2[20] = "linguagem C";
   char nomeCompleto[30];
   nomecompleto[0]= "\0";//como pegou lixo, basta colocar \0 no inicio pra delimitar.

   strcat(nomecompleto, nome1); 
   strcat(nomecompleto, nome2);

   puts(nomecompleto);   

   return 0;
}
