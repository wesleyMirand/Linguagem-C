#include<stdio.h>
#include<stdlib.h>

#define TAM 5 

int main() {
  float vetNotas[TAM], media = 0;
  int i;
  for(i = 0; i < TAM; i++) {
      printf("Informe a nota: ") ;
      scanf("%f", &vetNotas[i]);
  }

  i = 0;
  while (i < 10 ) {
      media += vetNotas[i];
      i++;
  }
     

     media /= TAM;

  printf("%.2f", media);

  return 0;
} 
