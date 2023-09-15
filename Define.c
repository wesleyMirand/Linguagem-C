#include<stdio.h>
#include<stdlib.h>
#define TAM 3

int main() {
flat notas[TAM], media = 0;
int i;
notas[0] = 1.2;
notas[1] = 9;
notas[2] = 1;

for(i = 0; i < TAM; i++) {
    media += vetNotas[i];
}
media /= TAM;

printf("%.2f", media);

return 0;
}
