//diferenca de 3variaçoes do char

#include<stdio.h>
#include<stdlib.h>

int main() {

        char *nome;//se definir o valor no inicio não da para alterar depois ex: char *nome = "Gilseone"
        nome = malloc(10 * sizeof(char)) /*MALLOC:é um metodo para alocação de memoria e como parametro preciso do tamanho, vou precisar de 10vezes caracteres, vezes a quantidade de bites que cada um dos caracteres ocupam e dessa forma aloco um espaco de 10 caracteres para leitura da var.*/
         gets(nome); //agora conseguimos fazer a leitura
         
         puts(nome); 

      

      return 0;
}
