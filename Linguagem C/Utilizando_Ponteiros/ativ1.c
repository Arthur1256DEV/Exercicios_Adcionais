#include <stdio.h>

int main(){

  int *num1;
  int *num2;

  int valor1 = 10;
  int valor2 = 10;

  num1 = &valor1;
  num2 = &valor2;

  printf("\n\nComparacao entre endereco de memoria: %x e %x ",num1, num2);

  if(num1>num2){
    printf("\n\n%x É maior que %x \n\n",num1, num2);
  } else {
    printf("\n\n%x É maior que %x \n\n",num2, num1);
  }

    return 0;
}