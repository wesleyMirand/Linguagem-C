//Pode tirar a chaves{} que vai ler do mesmo jeito, se tiver apenas uma linha ou else com laço de repetição, pode tirar a linha que reconhece normalmente

#include<stdio.h>
#include<stdlib.h>

#define TAM 3

int main() {
float nota[TAM], media = 0;
int i;
for(i= 0; i < TAM; i++){
    printf ("informe a nota:");
    scanf ("%f", &nota[i]);
}

for(i = 0; i < TAM; i++)
    media += nota[i];

media /= TAM;

printf("\nMedia = %.2f", media);

return 0;
}
