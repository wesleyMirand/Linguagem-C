//vamos fazer um for agora para percorrer as strings

#include<stdio.h>
#include<stdlib.h> 
int main(){

 char str1[10]= "ola" ,str2[10]= "ola";
 int i = 0; //começar declarando i inteiro 0 
 for(i = 0; str1[i] == str2[i]; i++) { /*tenho que comparar até que elas nao sejam mais iguais, vai parar a comparacao quando nao forem mais iguais, enquanto ele for igual a str2 eu vou continuar executando, quando chegar no final \0 elas vao estar na mesma posição e enfim encerrar o programa por as duas strings serem iguais*/
       if(str1[i] == '\0') 
          printf("Iguais!\n");/*se as duas strings forem igual a \0 \0 significa que chegou no final da string e ja tenho que ambas são iguais, pra finalizar usar o comando exit*/
           
          exit(0); //0 é um argumento
         
 } 
 printf("Diferentes!\n");//se chegar aqui é pq não entrou no if^, vai mostra que sao diferente se ele nao encontra todas ocorrencias iguais!
   
    return 0;
} 
 //agora são iguais
