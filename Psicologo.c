#include <stdio.h>
#include <stdlib.h>
#include<conio.h>


int main () {
 int ano;
 printf("A quantos anos voce sente essa dor?");
 scanf("%i", &ano);

 if (ano >= 1 && ano <=8) {
    printf("Procurar Ajuda!\n");
 }
 else if (ano >= 9 && ano <= 19) {
    printf("Va agora em um medico!\n");
 }
 else if (ano >= 20 && ano <= 39) {
    printf ("URGENTE VA PEDIR AJUDA!\n");
 }
 else {
    printf("Como aguentou até aqui? BOA SORTE\n!");
 }

return 0;

}
