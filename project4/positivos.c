#include <stdio.h>
#include <stdbool.h>
#define N 5

bool existe_positivo(int a[], int tam)
{
  int i;
  i = 0;
  while (i < tam)
  {
    if (a[i] > 0)
    {
      printf("Existe un positivo\n");
    }
    else
    {
      printf("No existe ningun positivo en \n");
    }
    i++;
  }
}

// bool todos_positivos(int a[], int tam)
// {
// }

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
}

