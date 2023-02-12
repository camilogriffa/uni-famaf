#include <stdio.h>

int main(void)
{
  int x, y, z;
  printf("Ingrese valor para x\n");
  scanf("%d", &x);
  printf("Ingrese valor para y\n");
  scanf("%d", &y);
  printf("Ingrese valor para z\n");
  scanf("%d", &z);

  int r1, r2, r3, r4, r5;
  r1 = x + y + 1;
  printf("x + y + 1 = %d\n", r1);
  r2 = z * z + y * 45 - 15 * x;
  printf("z * z + y * 45 - 15 * x = %d\n", r2);
  r3 = y - 2 == (x * 3 + 1) % 5;
  printf("y - 2 == (x * 3 + 1) % 5 = %d\n", r3);
  r4 = y / 2 * x;
  printf("y / 2 * x = %d\n", r4);
  r5 = y < x * z;
  printf("y < x * z = %d\n", r5);

  return 0;
}
/*
  En este programa se solicita al usuario que ingrese los valores de las variables, y luego calcula e imprime los resultados
  de las operaciones propuestas en cada fila de la tabla.
  Al no existir los booleanos de forma nativa (se representan con enteros en lenguaje C), la última expresión, al igual que la tercera,
  tienen en realidad tipo int, más allá de que representan expresiones que evalúan por True o False.
*/