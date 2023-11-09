
#include<stdio.h>
#include<stdlib.h>

#define TAM 5

int main() {
int vetNumeros[TAM], i, menor, indiceMenor;

for(i = 0; i < TAM; i++) {
    printf("informe o numero: ");
    scanf("%i", &vetNumeros[i]);
   }

   indiceMenor = 0 ;
   for(i = 1; i < TAM; i++) {
       if(vetNumeros[i] < vetNumeros[indiceMenor]) {
          indiceMenor = i;
        }
      }
      printf("\n\n Menor = %i na posicao = %i\n\n", vetNumeros[indiceMenor], indiceMenor);
      
      return 0;
}
