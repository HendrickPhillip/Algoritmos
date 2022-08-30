#include <stdio.h>

int main(void) {
  int num, valor;
  
  printf("Informe o numero:\n");
  scanf("%i",&num);
  valor = num;
  
  if (num %= 2){
    printf("Numero: %i Impar\n",valor);
  } else {
    printf("Numero: %i Par\n",valor);
  }
  
  return 0;
}
