
 //agora são diferentes porque mudou o valor

#include<stdio.h>
#include<stdlib.h> 
int main(){

 char str1[10]= "olaxxxxxxxxxxx" ,str2[10]= "ola";
 int i = 0;
 for(i = 0; str1[i] == str2[i]; i++){ 
       if(str1[i] == '\0') 
          printf("Iguais!\n");
           
          exit(0);
         
 } 
 printf("Diferentes!\n")
   
    return 0;
} 
