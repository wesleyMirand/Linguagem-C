//uma funcao pronta para contar caracteres aprender usar strlen

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char nome[50] = " Minha string qualquer";
    int qtd;

    strlen (nome); //retorna a quantidade de char que foi pedida e precisa ter uma var pra guarda o valor.

    printf("A quantidade de char é : %d\n", strlen(nome)); //pega o strlen e coloca no parametro %d. toda Que fazer medição iria usar o for pra percorrer toda funcao e conteudo da string. E pra isso essas funcao da string existe para nao perde tempo e facilitar.

    return 0;
} 
