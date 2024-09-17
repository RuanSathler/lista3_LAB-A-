#include <stdio.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

void Status(int dia, int temperatura){
  if(temperatura>=15){
    if((dia == 3) || (dia == 5)){
      printf("jeans \n");
    }
    else if(dia == 2){
      if(temperatura>23){
        printf("bermuda\n");
      }
      else{
        printf("jeans\n");
      }
    }
    else{
      if(temperatura>=25){
        printf("bermuda\n");
      }
      else{
        printf("jeans\n");
      }
    }
    
  }
  else{
    printf("F\n");
  }
}

int main(){

  int dia, temperatura, cont;

  cont = LerInt();

  for(;cont > 0; cont--){

    dia = LerInt();
    temperatura = LerInt();
    
    Status(dia, temperatura);
  }

  return 0;
}