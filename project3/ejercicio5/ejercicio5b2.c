#include <stdio.h>

int main(void)
{
  /* Estado inicial */
  int x, i, res = 0;
  printf("Ingrese valor de x\n");
  scanf("%d", &x);
  printf("Ingrese valor de i\n");
  scanf("%d", &i);
  /* Realizamos las dos asignaciones */
  i = 2;
  res = 1;
  /* ciclo */
  while (i < x && res)
  {
    res = res && (x % i != 0);
    i = i + 1;
    printf("Final state of x %d\n", x);
    printf("Final state of i %d\n", i);
    printf("Final state of res %d\n", res);
  }
  return 0;
}

/*
  La ejecucion del programa con el estado igual a (x -> 5, i -> 0, res -> 0), obtenemos:
    σ1-0 : (x -> 5, i -> 3, res -> 1)
    σ1-1 : (x -> 5, i -> 4, res -> 1)
    σ1-2 : (x -> 5, i -> 5, res -> 1)

  De esta forma deducimos que el programa calcula si un número es primo o no. En caso de que res = 1 el número es primo, mientras que
  si res = 0 el número no lo es.
*/