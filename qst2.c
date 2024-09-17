#include <stdio.h>

double LerNum(){
  double numLido;
  scanf("%lf", &numLido);

  return numLido;
}

int main(){

  double acumulador, num;
  int tentativas, cont;

  while(scanf("%d", &tentativas), tentativas != 0){

     acumulador = 0;
    
    for(cont = 0; cont < tentativas; cont++){
      num = LerNum();
      acumulador = acumulador + num;
    }    
    acumulador = acumulador / tentativas;
    printf("%.2lf\n", acumulador);
  }

  return 0;
}