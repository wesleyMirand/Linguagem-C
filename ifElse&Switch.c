#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf("Digite a opcao:");
        scanf("%i", &valor);
     /*   if(valor==10 ){
            printf("oi");
        }else if (valor == 5){
            printf("eae");
        }else{
            printf("acabou tudo");
        }
      */
    switch(valor) {
     case 1:
            printf("valor 1");
            break;
     case 2:
            printf("valor 2");
            break;
     case 3:
            printf("valor 3");
            break;
     default:
            printf("nenhum dos case!");
    }

    return 0;
}
