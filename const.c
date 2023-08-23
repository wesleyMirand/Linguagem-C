#include <stdio.h>
#include <stdlib.h> //bliblioteca que usa system e etc...

#define CONST 100 //define, nome da conta, valor, QUANDO O VALOR NAO VAI MUDAR, MAIS FAZ PARTE DO CABEÇALHO, 102L significa numeros longos, 0xF Base hexadecimal ,12.312F constante flutuante

int main()
{
    /* float num1, num2, soma; //valor que as var guardam podem mudar
    printf("Informe num1: ");
    scanf("%f", %num1);

    printf("Informe num2: ");
    scanf("%f", %num2);// nos numeros inteiro tanto posso usar o %i como o %d

    soma = num1 * num2;

    printf("Resultado: %.4f\n", soma); //mostrar na tela a var */

    int valor1;
    printf("Informe valor1: "); //QUANDO PODER COPIAR O CODIGO A ACIMA MELHOR POR NAO LEVAR MUITO TEMPO
    scanf("%i", &valor1); //LER VALOR
    printf("Resultado: %i\n", valor1 + CONST); //SOMAR O VALOR DA CONSTANTE

    system("pause");
    return 0;
}
