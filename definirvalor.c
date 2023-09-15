/*depois definir vetores com float not[TAM] com 3 elemento dentro do vetores e depois fizemos a media, agora vamos fazer um segundo for para mostrar esses elemento dentro da tela. e vamos mudar o tipo por inteiro, e por o \t de tabulação. vai mostra valores com o tab entre eles.*/


#include<stdio.h>
#include<stdlib.h>

#define TAM 3

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
