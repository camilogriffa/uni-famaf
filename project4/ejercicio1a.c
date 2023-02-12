#include <stdio.h>
#include <assert.h>

void holaHasta(int n)
{
  while (n > 0)
  {
    printf("hola\n");
    n = n - 1;
  }
}

int main(void)
{
  int n;
  printf("Ingrese valor para n\n");
  scanf("%d", &n);

  holaHasta(n);
  return 0;
}
