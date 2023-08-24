include<stdio.h>
include<stdlib.h>
include<conio>
int main() {
    int valorDacarne;
    printf("Qua voce acha que é o preco da carne?");
    scanf("%i", &valorDacarne);
    switch(valorDacarne){
          case1 :
                 printf("valor 30");
          break;
          case2 :
                 printf("valor 60");
          break;
          case3 :
                 printf("valor 90");
          break;
          default : //ultimo igual o if, else if e "else"
                 printf("valor default");
          
}
 return 0;
}
