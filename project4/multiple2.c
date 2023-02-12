#include <stdio.h>
#include <assert.h>

/*
{Pre: x = X, y = Y, z = Z}
x, y, z := y, y + x + z, y + x
{Post: x = Y, y = Y + X + Z, z = Y + X}
*/

int main(void)
{
  /* Estado inicial */
  int x, y, z, xaux, yaux, zaux;
  printf("Ingrese valor para x\n");
  scanf("%d", &x);
  printf("Ingrese valor para y\n");
  scanf("%d", &y);
  printf("Ingrese valor para z\n");
  scanf("%d", &z);
  /* Le doy valor a mis variables auxiliares */
  xaux = x;
  yaux = y;
  zaux = z;
  /* Comprobamos la precondición */
  assert(x == xaux && y == yaux && z == zaux);
  /* Realizamos las asignaciones */
  x = yaux;
  y = yaux + xaux + zaux;
  z = yaux + xaux;
  /* Retornamos los valores de nuestra variables */
  printf("El nuevo valor de x es %d\n", x);
  printf("El nuevo valor de y es %d\n", y);
  printf("El nuevo valor de z es %d\n", z);

  return 0;
}