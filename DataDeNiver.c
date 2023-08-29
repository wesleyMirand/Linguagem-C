#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;

    printf("Dia: ");
    scanf("%i", &dia);

    printf("Mes: ");
    scanf("%i", &mes);

    printf("Ano: ");
    scanf("%i", &ano);

    if (dia < 0 ) {
        printf("Dia menor do que zero \n");
        return 0;
    }
    if (mes < 0 ) {
        printf("Mes menor do que zero \n");
        return 0;
    }
    else if (mes > 12) {
        printf("Mes maior que 12\n");
        return 0;
    }
    if (ano < 0) {
        printf("Ano menor do que zero\n");
        return 0;
    }
    //funcao para ano bisexto
    if (mes == 2) {
        if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 !=0))) {
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
                printf("Numero de dias maior que 31 !\n");
                return 0;
            }
        }
        else {
            if (dia > 30) {
                printf("Numero de dias maior que 30 \n");
                return 0;
            }
        }
    }
    printf("Nenhum erro\n");
    return 0;
}
