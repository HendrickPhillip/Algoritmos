#include <stdio.h>
  
int main(void) {
  int i,vet[30], impar[30], dupli[30];
  srand(time(NULL));
  
  printf("Vetor ");
    for (i = 1; i < 30; i++) {
        vet[i] = rand() %30;
          printf("[%d] ", vet[i]);
    }
  
  printf("\n\nVetor Impar ");
    for (i = 1; i < 30; i++) {    
      if(vet[i] % 2 != 0) {
        printf("[%d] ",vet[i] * 3);  
      } 
  }
  
  printf("\n\nVetor Par ");
    for (i = 1; i < 30; i++) {    
      if(vet[i] % 2 == 0) {
        printf("[%d] ",vet[i] * 2);  
      } 
  }
  
}
