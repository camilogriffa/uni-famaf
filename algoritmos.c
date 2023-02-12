#include <stdio.h>

//Compiler version gcc  6.3.0
void main()
{
  printf("hola");
  int a[4];
  int b[4] = {2, 4, 5, 6};
  int c[4];
  
  for(int i = 0; i < 4; i++) {
    printf("El elemento %i de b es %i:\n", i, b[i]);
  }
  
  for(int i = 0; i < 4; i++) {
    scanf("%i", &a[i]);
  }
  
  for(int i = 0; i < 4; i++) {
    c[i] = a[i] + b[i];
  }
  
  for(int i = 0; i < 4; i++) {
    printf("El elemento %i de b es %i:\n", i, b[i]);
  }
}