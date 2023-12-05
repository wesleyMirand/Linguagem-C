//strcat para concatenar conteudo da var para outra as var tenque ser string 
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int main() {
   char nome1[30] = "Curso";
   char nome2[20] = "linguagem C";

   strcat(nome1, "de C"); //concatenando qualquer string

   puts(nome1);   

   return 0;
}
