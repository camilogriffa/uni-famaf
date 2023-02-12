#include <stdio.h>
#include <assert.h>

int main(void)
{
  /* Estado inicial */
  int x, y;
  printf("Ingrese valor de x\n");
  scanf("%d", &x);
  printf("Ingrese valor de y\n");
  scanf("%d", &y);
  /* Con el assert aseguramos
  que se cumpla la precondicion */
  assert(x == 2 && y == 5);
  /* Asignamos el nuevo valor de x */
  x = x + y;
  y = y + y;
  /* Se modifico nuestro estado inicial
  por lo tanto el valor que devolveremos de x e y será el
  de la ultima asignacion */
  printf("Ahora x = %d\n", x);
  printf("Ahora y = %d\n", y);
}