#include <stdio.h>
#include <assert.h>

int main(void)
{
  /* Estado Inicial */
  int x, y, z, xaux, yaux, zaux;
  /* Solicito valores al usuario */
  printf("Ingrese valor de x \n");
  scanf("%d", &x);
  printf("Ingrese valor de y \n");
  scanf("%d", &y);
  printf("Ingrese valor de z \n");
  scanf("%d", &z);
  /* Defino mis variables auxiliares */
  xaux = x;
  yaux = y;
  zaux = z;
  /* Verificamos precondicion */
  assert(zaux - yaux != 0 && xaux - yaux != 0);
  /* Realizo las asignaciones */
  x = (zaux - yaux) / (xaux - yaux);
  y = zaux % xaux;
  /* Devuelvo postcondicion */
  printf("El nuevo valor de x es %d\n", x);
  printf("El nuevo valor de y es %d\n", y);
  printf("El nuevo valor de z es %d\n", z);
  return 0;
}