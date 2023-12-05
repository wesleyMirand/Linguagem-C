//strcnmp vai passar 2 parametro e 3 size quantidade que esta comparando

int main() {
  char nome1[10] = "abacaxi";
  char nome2[10] = "abacai";//os 5 primeiro char são iguais.
  int retorno;

  //retorno = strcnmp(nome1, nome2, 5);vai retorna zero
  retorno = strcnmp(nome1, nome2, 6);//vai retorna 15 pq é maior que zero pode ser qualquer valor desde a ordem.

  printf("%d\n", retorno); 

  return 0;
}
