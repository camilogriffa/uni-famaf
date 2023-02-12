#include <stdio.h>
#include <assert.h>

int main(void)
{
  int x, y, xaux, yaux;

  printf("Ingrese valor de x \n");
  scanf("%d", &x);
  printf("Ingrese valor de y \n");
  scanf("%d", &y);

  xaux = x;
  yaux = y;

  assert(xaux > 0 && yaux % xaux == 0);

  x = yaux * yaux / xaux;
  y = xaux * (yaux + 2);

  printf("El nuevo valor de x es %d\n", x);
  printf("El nuevo valor de y es %d\n", y);

  return 0;
}