#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    //sintax do do while
    do{
            printf("Ola Mundo");
    } while(i <= 10);
/* vai entrar em loop infinito pq nao fizemos a conexao para trocar a var em algum momento, e ai tenque fazer com que var
que estamos usando para fazer os teste tenha seu valor alterado*/
    //printf("\n%i\n", i);
   return 0;
}
