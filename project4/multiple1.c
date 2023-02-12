#include <stdio.h>
#include <assert.h>

/*
{Pre: x = X, y = Y}
x, y := x + 1, x + y
{Post: x = X + 1, y = X + Y}
*/

int main(void)
{
  /* Estado inicial */
  int x, y, xaux, yaux;
  printf("Ingrese valor para x\n");
  scanf("%d", &x);
  printf("Ingrese valor para y\n");
  scanf("%d", &y);
  /* Le doy valor a mis variables auxiliares */
  xaux = x;
  yaux = y;
  /* Comprobamos la precondición */
  assert(x == xaux && y == yaux);
  /* Realizamos las asignaciones */
  x = xaux + 1;
  y = xaux + yaux;
  /* Retornamos los valores de nuestra variables */
  printf("El nuevo valor de x es %d\n", x);
  printf("El nuevo valor de y es %d\n", y);

  return 0;
}