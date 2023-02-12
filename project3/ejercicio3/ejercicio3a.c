#include <stdio.h>
#include <assert.h>

int main(void)
{
  /* Estado inicial */
  int x;
  printf("Ingrese valor de x\n");
  scanf("%d", &x);
  /* Con el assert aseguramos
  que se cumpla la precondicion */
  assert(x == 1);
  /* Asignamos el nuevo valor de x */
  x = 5;
  /* Se modifico nuestro estado inicial
  por lo tanto el valor que devolveremos de x será el
  de la ultima asignacion */
  printf("Ahora x = %d\n", x);
}
