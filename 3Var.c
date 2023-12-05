//diferenca de 3variaçoes do char

#include<stdio.h>
#include<stdlib.h>

int main() {
      \\char []
      \\char [x]
      \\char *      /*precisa definir a quantidade de memoria que vai ser alocada(RESERVADA), para manipulação da string.como seria definido certo tamanho nao daria para alterar depois. Porque o espaço que ela vai definir ela vai alocar a variavel nele e internamente vai ser um valor constante, não deixando alterar.*/


      \\char nome[] = "neia";              /*vai pegar a quantidade de char + delimetador e vai dizer que o tamanho do vetor é 5.E se eu usar char nome[50] = "neia" so irei estar usando 5 char e o resto vai mostrar porem tudo lixo.Vazio sem informação util.Essa é a diferença dos 2 char com tamanho ou sem*/

        char *nome = "Gilseone";

        \\gets(nome);guarda a var nela novamente a mesma leitura.Porem vai dar erro porque o espaço de memoria ja estava alocado.-
        \\nome [0] = 'H'; vai dar erro tbm. porque o valor ja esta constante dentro da variavel nome.

         puts(nome); //GUARDEI E INICIALIZEI a var nome e vai mostrar na tela.

      

      return 0;
}
