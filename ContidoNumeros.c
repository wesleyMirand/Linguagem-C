/*agora outra forma de inicializar o TAM e alem disso criar outro nota2, o mesmo valores dentro do 2, copiar tenque fazer o mesmo for so que em 2 e fazer que funca 2 em i seja igual a 1 em i, copiar vetor pro outro for(i = 0; i < TAM; i++) {
    nota2[i] = nota[i];
   } e assim mostra os valores do segundo vetor junto todos valores contido no primeiro*/



#include<stdio.h>
#include<stdlib.h>

#define TAM 5

int main() {
int nota[TAM] = [1, 4, 5, 6, 7], nota2[TAM];
int i;
/*for(i= 0; i < TAM; i++){
    printf ("informe a nota:");
    scanf ("%f", &nota[i]);
} AI NAO PRECISA FAZER ESSA LEITURA */

for(i = 0; i < TAM; i++) {
    nota2[i] = nota[i];
   }

for(i = 0; i < TAM; i++) {
    printf("%i\t", vetNotas[i]);
   }

return 0;
}
