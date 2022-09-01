#include <stdio.h>

int main(void) {
  int i,v[100], dez[100], trinta[100], posicaoD, posicaoT;
  srand(time(NULL));
  
  for (i = 0; i < 100; i++){
    v[i] = rand() %100;
    printf("%d ", v[i]);
     
    if(v[i] == 10) {
      posicaoD = i;
    }
    if(v[i] == 30) {
      posicaoT = i;
    }
  }
  printf("\n");
  printf("\nPosição dez [%d]",posicaoD);
  printf("\nPosição trinta [%d]",posicaoT);
 
  
}
