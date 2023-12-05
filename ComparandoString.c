/* comparando strings como saber se e igual a outra, o normal é trabalhar com valores numericos, compara inteiro: */
int main() { 
int num1 = 0, num2=1; 
if(num1==num2) {}

e agora com string 

{char str1[10]= "ola", str2[10] = "ola"; 
if(str1 == str2)//falso pra essa comparação. String são ponteiros, não comparei o valor e sim o endereço que cada uma string foi salva por isso da diferente, para comparar o valor tenque comparar caracteristica por caracteristica. da mesma forma da contagem de caracter que precisa de algumas funcao.
printf("iguais!\n"); 
else 
printf("diferentes\n"); //mestro sendo igual retorno diferente! qu
return 0; 
} 
