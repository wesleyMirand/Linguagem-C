#include <stdio.h>
#include <stdlib.h> //bliblioteca que usa system e etc...
int main()
{
    char meuChar; //primeira var criada
    scanf("%c", &meuChar);//precisa de algum parametros e o primeiro e o tipo que vou colocar o & mostra que ta lendo um caracter e vai guarda no endereco meuChar;
    printf("%c\n", meuChar); //mostrar na tela a var

    system("pause");
    return 0;
}
