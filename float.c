#include <stdio.h>
#include <stdlib.h> //bliblioteca que usa system e etc...
int main()
{
    float meuFloat; //primeira var criada, tipo de dado
    scanf("%f", &meuFloat);//nome da var e realizo leitura
    printf("Resultado: %.2f\n", meuFloat); //mostrar na tela a var

    system("pause");
    return 0;
}
