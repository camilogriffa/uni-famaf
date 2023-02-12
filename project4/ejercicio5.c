#include <stdio.h>

void pedirArreglo(int a[], int n_max)
{
  int i;
  i = 0;
  while (i < n_max)
  {
    printf("Ingrese posicion %d del arreglo:\n", i);
    scanf("%d", &a[i]);
    i = i + 1;
  }
}

void imprimeArreglo(int a[], int n_max)
{
  int i;
  i = 0;
  while (i < n_max)
  {
    printf("Elemento en la posicion %d es %d\n", i, a[i]);
    i = i + 1;
  }
}

#define n_max 5
int main(void)
{
  int array[n_max];
  pedirArreglo(array, n_max);
  imprimeArreglo(array, n_max);
  return 0;
}
