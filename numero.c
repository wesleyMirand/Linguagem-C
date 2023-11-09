#include<stdio.h>
#include<stdlib.h>

#define TAM 5

int main() {
int vetNumeros[TAM], i, menor, indiceMenor;

for(i = 0; i < TAM; i++) {
    printf("informe o numero: ");
    scanf("%i", &vetNumeros[i]);
   }

   menor = vetNumeros[0] ;
   for(i = 1; i < TAM; i++) {
       if(vetNumeros[i] < menor) {
          menor = vetNumeros[i];
        }
      }
      printf("\n\n Menor = %i \n\n", menor);
      
      return 0;
}
