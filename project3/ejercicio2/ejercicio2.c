#include <stdio.h>

int main(void)
{
  int x, y, z, b, w;
  /* Estos valores son números enteros */
  printf("Ingrese valor para x\n");
  scanf("%d", &x);
  printf("Ingrese valor para y\n");
  scanf("%d", &y);
  printf("Ingrese valor para z\n");
  scanf("%d", &z);
  /* Estos valores son enteros, que representan valores booleanos */
  printf("Ingrese valor para b\n");
  scanf("%d", &b);
  printf("Ingrese valor para w\n");
  scanf("%d", &w);

  int res1, res2, res3;
  res1 = x % 4 == 0;
  printf("x % 4 == 0 es %d\n", res1);
  res2 = y - x == (-1) * z;
  printf("y - x == (-1) * z es %d\n", res2);
  res3 = !b && w;
  printf("!b && w es %d\n", res3);

  return 0;
}
