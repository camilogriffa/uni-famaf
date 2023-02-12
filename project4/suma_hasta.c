#include <stdio.h>
#include <assert.h>

int suma_hasta(int N)
{
  int a, b;
  a = 0;
  b = 0;
  while (a < N)
  {
    a = a + 1;
    b = b + a;
  }
  return b;
}

int main(void)
{
  int N;
  printf("Ingrese valor para N\n");
  scanf("%d", &N);
  if (N > 0)
  {
    printf("%d", suma_hasta(N));
  }
  else
  {
    printf("Debe ingresar un numero positivo\n");
  }
  return 0;
}