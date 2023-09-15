//agora mudar o valor apenas da constant TAM com 5 valores


#include<stdio.h>
#include<stdlib.h>

#define TAM 5

int main() {
int nota[TAM], media = 0;
int i;
for(i= 0; i < TAM; i++){
    printf ("informe a nota:");
    scanf ("%f", &nota[i]);
}

for(i = 0; i < TAM; i++) {
    printf("%i\t", vetNotas[i]);
   }

return 0;
}
