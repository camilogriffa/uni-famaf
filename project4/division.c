#include <stdio.h>

struct div_t
{
  int cociente;
  int resto;
};

struct div_t division(int x, int y)
{
  struct div_t div;
  div.cociente = x / y;
  div.resto = x % y;
  return div;
}

int main(void)
{
  int x, y;
  printf("Ingrese valor para x\n");
  scanf("%d", &x);
  printf("Ingrese valor para y\n");
  scanf("%d", &y);
  struct div_t div;

  if (x == 0 || y == 0)
  {
    printf("ERROR! No pueden ser 0\n");
  }
  else
  {
    div = division(x, y);
    printf("El cociente es %d\n", div.cociente);
    printf("El resto es %d\n", div.resto);
  }
}
