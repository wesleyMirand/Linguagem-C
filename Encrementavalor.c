//agora calcular usando outro laco de repetição,usando o while, o i dentro do for i=0;, preciso inicializar novamente o valor dele no do while, encremenando o valor até chegar no i++ para encrementar.

#include<stdio.h>
#include<stdlib.h>
#define TAM 3;

int main() {
float nota[TAM], media = 0;
int i;
for(i= 0; i < TAM; i++){
    printf ("informe a nota:");
    scanf ("%f", &nota[i]);


i=0;
do{
   media += nota[i];
   i++;
}while(i<10);

media /= TAM;

printf("\nMedia = %.2f", media);

return 0;
}
