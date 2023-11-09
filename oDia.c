
#include <stdio.h>
#include <stdlib.h>
/* 5. Escreva um programa que pergunte o dia, mês e ano do aniversário de
 uma pessoa e diga se a data é válida ou não. Caso não seja, diga o motivo.*/
int main()
{
    int dia, ano, mes;

    printf("Informe seu dia de aniversario:");
    scanf("%i", &dia);

    printf("Informe seu mes de aniversario:");
    scanf("%i", &mes);

    printf("Informe seu ano de aniversario:");
    scanf("%i", &ano);

    if( dia < 0 ) {
        printf("Dia menor que zero \n");
        return 0;
    }
    if( mes < 0 ) {
        printf("Mes menor que zero \n");
        return 0;
    }
    if( ano < 0 ) {
        printf("Ano menor que zero \n");
        return 0;
    }

    //Funcao para ano BISEXTO

    if(mes == 2) {
        if((ano % 400 ==0) || ((ano % 4 == 0) && (ano % 100 !=0))) {
            if(dia > 29) {
                printf("Dia do mes maior que 29\n");
            }
        }
        else {
            if(dia > 28) {
                printf("Dia do mes maior que 28\n");
                return 0;
            }
        }
    }
    else {
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            if(dia > 31) {
                printf("Numero de dias maior que 31\n");
                return 0;
            }
        }
        else {
            if(dia > 30) {
                printf("Numero de dias maior que 30\n");
                return 0;
            }
        }
    }

    printf("Data Valida!\n");
    return 0;
}
