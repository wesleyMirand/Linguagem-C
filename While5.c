#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    while (i<=1000){
            printf("%i\n", i);
            
            i++;
            
            if(i == 10) {
                break; //enterrompe o codigo 
            }
    }// manda sair e ja vai incrementa com o 10 virando 11
    
    printf("\n%i\n", i);
    
   return 0;
}
