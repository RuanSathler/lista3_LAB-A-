#include <stdio.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(){

  int tentativas, maior, menor, prox, cont, diferenca;

  tentativas = LerInt();
  maior = LerInt();
  menor = LerInt();  
  prox = LerInt();

  
   for(cont = 0; cont < tentativas; cont++){
     
     if(menor>maior){
       int num;
       num = menor;
       menor = maior;
       maior = num;
     }

     if(prox>maior) maior = prox;
     if(prox<menor) menor = prox;

     diferenca = maior - menor;

     printf("%d\n", diferenca);

     maior = LerInt();
     menor = LerInt();  
     prox = LerInt();
   } 


  return 0;
}