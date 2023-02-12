#include <stdio.h>
#define N 5

int sumatoria(int a[], int tam)
{
  int i = 0;
  int sumatoria = 0;
  while (i < tam)
  {
    sumatoria = sumatoria + a[i];
    i++;
  }
  return sumatoria;
}


int pedirEntero(void)
{
  int x;
  printf("Ingrese un valor\n");
  scanf("%d", &x);
  return x;
}

void pedirArreglo(int a[], int n_max)
{
  int i = 0;
  printf("Ingrese los valores del array\n");
  while (i < n_max)
  {
    a[i] = pedirEntero();
    i++;
  }
}

int main(void)
{
  int arr[N];
  pedirArreglo(arr, N);
  printf("La sumatoria es: %d", sumatoria(arr, N));
  return 0;
}