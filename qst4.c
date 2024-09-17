#include <stdio.h>
#include <stdlib.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(){

  int inicio, fim, acumulador;


  while(scanf("%d", &inicio), scanf("%d", &fim), (inicio != 0) || ( fim != 0)){
    acumulador = 0;
    
    for(; inicio <= fim; inicio++){     
      if((inicio % 2) == 0){
         acumulador = acumulador + abs(inicio);
       }
    }
    printf("%d\n", acumulador);
  } 
  return 0;  
}