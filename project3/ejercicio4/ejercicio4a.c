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
  assert(x == 3 && y == 1);
  /* CONDICIONAL */
  if(x>=y){
  /* Asignamos el nuevo valor de x */
    x = 0;
  } else {
  /* Asignamos el nuevo valor de x */
    x = 2;
  }
  /* Se modifico nuestro estado inicial
  por lo tanto el valor que devolveremos de x será el
  de la ultima asignacion */
  printf("Ahora x = %d\n", x);

  return 0;
}
