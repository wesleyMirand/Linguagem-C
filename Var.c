#include <stdio.h>
#include <stdlib.h> //bliblioteca que usa system e etc...
int main()
{
    int meuInt =0; //primeira var criada
    scanf("%i", &meuInt);//precisa de algum parametros e o primeiro e o tipo que vou colocar o & mostra que ta lendo um caracter e vai guarda no endereco meuChar;
    printf("Resultado: %i\n", meuInt); //mostrar na tela a var

    system("pause");
    return 0;
}
