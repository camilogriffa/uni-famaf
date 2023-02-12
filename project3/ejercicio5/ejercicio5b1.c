#include <stdio.h>

int main(void)
{
  /* Estado inicial */
  int x, y, i = 0;
  printf("Ingrese valor de x\n");
  scanf("%d", &x);
  printf("Ingrese valor de y\n");
  scanf("%d", &y);
  /* ciclo */
  while (x >= y)
  {
    x = x - y;
    i = i + 1;
    printf("Nuevo valor x %d\n", x);
    printf("Nuevo valor y %d\n", y);
    printf("Nuevo valor i %d\n", i);
  }

}

/*
  La ejecucion del programa con el estado igual a (x -> 13, y -> 3, i -> 0):
    σ1-0 : (x -> 10, y -> 3, i -> 1)
    σ1-1 : (x -> 7, y -> 3, i -> 2)
    σ1-2 : (x -> 4, y -> 3, i -> 3)
    σ1-3 : (x -> 1, y -> 3, i -> 4)

  Si realizamos la ejecucion del programa con el estado (x -> 32, y -> 6, i -> 0):
    σ1-0 : (x -> 32, y -> 6, i -> 0)
    σ1-1 : (x -> 26, y -> 6, i -> 1)
    σ1-2 : (x -> 20, y -> 6, i -> 2)
    σ1-3 : (x -> 14, y -> 6, i -> 3)

  De esta forma deducimos que el programa calcula la división entera entre x e y,
  y almacena el cociente en la variable i.
*/