#include <stdio.h>

int count = 0; 
int quantidade = 3; 

void TorreHanoi(int origem, int destino, int auxiliar, int quantidade){
  if(quantidade == 1 ){
    printf("Move de %d para %d\n", origem, destino);
    count+=1;=
  }else{
    TorreHanoi(origem, auxiliar, destino, quantidade-1);
    TorreHanoi(origem, destino, auxiliar, 1);
    TorreHanoi(auxiliar, destino, origem, quantidade-1);
  }
}

int main(){
  TorreHanoi(0, 2, 1, quantidade);
  printf("\nQuantidade de Discos: %d\n", quantidade);
  printf("Nº minimo de movimentos: %d\n\n", count);
  return 0;
}
