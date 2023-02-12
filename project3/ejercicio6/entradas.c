#include <stdio.h>

int pedirEntero(void)
{
  int entero;

  printf("Se solicita un entero:\n");
  scanf("%d", &entero);

  return entero;
}

void imprimeEntero(int x)
{
  printf("Este es el entero:%d\n", x);
}

int min(void)
{
  int x, y, z, m;
  x = pedirEntero();
  y = pedirEntero();
  z = pedirEntero();
  m = pedirEntero();

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

int main(void) {
  int m;
  m = min();
  imprimeEntero(m);
  return 0;
}

/*
  Las ventajas que encuentro de esta nueva version son:
  - Que al aplicar las funciones creadas para detectar inputs y outputs nos permiten evitar repeticion de codigo.
  - Nuestro codigo es mas claro y facil de leer.
  - Tambien permite mejorar la facilidad al debuggear.

  Las funciones las podemos utilizar para reemplazar los inputs de los valores enteros en casi todos los
  ejercicios del proyecto y también para los outputs que impliquen imprimir un solo entero.
*/