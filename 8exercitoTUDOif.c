
include<stdio.h>
include<stdlib.h>
include<conio>
int main() {
    int idade;
    printf("QUantos anos voce tem para quer servi o exercito maromba?");
    scanf("%i", &idade);
    if (idade>=18 || idade<=25) {  //Ao usar só if ele vai testar todos, ao contrario do else if que ira testar so um so se for positivo
        printf("convocado vem pro exercito!!!!\n");
     }
     if(idade>=25 && idade<=30) {
        printf("convocado vem pro exercito!!!!\n");
     }
     if(idade>=30 && idade<=35) {
        printf("convocado vem pro exercito!!!!\n");
     }
     else {
        printf("infelizmente nao da!\n");
     }
 return 0;
}
