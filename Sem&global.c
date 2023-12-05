
#include<stdio.h>
#include<stdlib.h>

int main() {
     char nome[51];
     printf("informe o seu nome:");
     scanf("%s", nome);

     printf("o nome armazenado foi: %s\n", nome);//para mostra o nome

 
   return 0;
}
/*desa vez não tem e global &, porque usamos para ler determinado endereço, como o vetor matriz ja são tipo referencia, então nao precisamos colocar o &ecomercial, para leitura basta colocar o nome da variavel. antes usavamos o & porque a era preciso a leitura de varios elemento de vetor inteiro, mais o tipo de referencia agora são tipos especificos. os internos são do tipo char que ja trabalha com cadeia de caracteres diferente. A REGRA para usar a STRING é não por o &. 
se for usar wesley santos, a leitura so vai no wesley pq o scanf so pega o primeiro nomes depois do espaço não pega mais*/


