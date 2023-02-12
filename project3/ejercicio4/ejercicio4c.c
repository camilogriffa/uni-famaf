#include <stdio.h>

int main(void)
{
  int x, y, z, m;
  printf("Ingrese valor de x\n");
  scanf("%d", &x);
  printf("Ingrese valor de y\n");
  scanf("%d", &y);
  printf("Ingrese valor de z\n");
  scanf("%d", &z);
  printf("Ingrese valor de m\n");
  scanf("%d", &m);

  /* CONDICIONAL1 */
  if (x < y)
  {
    m = x;
  }
  else if (x >= y)
  {
    m = y;
  }
  /* Mostramos el valor del nuevo estado de sigma
  SIGMA1 */
  printf("Sigma1\nx = %d\ny = %d\nz = %d\nm = %d\n",x,y,z,m);

  /* CONDICIONAL2 */
  if (m < z)
  {
  }
  else
  {
    m = z;
  }
  /* Mostramos el valor del nuevo estado de sigma
  SIGMA2 */
  printf("Sigma2\nx = %d\ny = %d\nz = %d\nm = %d\n",x,y,z,m);

  return 0;
}
