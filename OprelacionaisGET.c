#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    /*int valorLido;
    scanf("%i", &valorLido);
    printf("%i\n", valorLido); //vai mostrar o valor digitado */

    /*char valorLido;
    scanf("%c", &valorLido);
    printf("%c\n", valorLido); //leitura caracter */

    char valorLido;
    valorLido = getch(); //vai ler oque digita, funcao especial para windows
    printf("Valor lido: %c\n", valorLido); //outra forma para fazer leitura de char, existem mais formas de leitura mais ess e so de letra

    return 0;
}
