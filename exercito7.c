include<stdio.h>
include<stdlib.h>
include<conio>
int main() {
    int idade;
    printf("QUantos anos voce tem para quer servi o exercito maromba?");
    scanf("%i", &idade);
    if (idade>=18 || idade<=25) {
        printf("convocado vem pro exercito!!!!\n");
     }
     else if(idade>=25 && idade<=30) {
        printf("convocado vem pro exercito!!!!\n");
     }
     else if(idade>=30 && idade<=35) {
        printf("convocado vem pro exercito!!!!\n");
     }
     else {
        printf("infelizmente nao da!\n");
     }
 return 0;
}
