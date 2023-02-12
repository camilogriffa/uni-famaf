#include <stdio.h>
#define N 5

struct datos_t
{
  int mayor_que;
  int menor_que;
};

struct datos_t mayor_menor_que(int elem, int a[], int tam)
{
  struct datos_t res;
  int i = 0;
  int e1 = 0;
  int e2 = 0;
  while (i < tam)
  {
    if (a[i] > elem)
    {
      res.mayor_que = e1+1;
    }
    else if (a[i] < elem)
    {
      res.menor_que = e2+1;
    }
    i++;
  }
  return res;
}

int pedirEntero(void)
{
  int x;
  printf("Ingrese valor de x\n");
  scanf("%d", &x);
  return x;
}

void pedirArreglo(int a[], int n_max)
{
  int i = 0;
  printf("Ingrese valores del array\n");
  while (i < n_max)
  {
    a[i] = pedirEntero();
    i++;
  }
}

int main(void)
{
  int x;
  int a[N];
  struct datos_t res;

  printf("Ingrese valor de x \n");
  scanf("%d", &x);

  printf("Ingrese valores hasta completar el array \n");
  pedirArreglo(a, N);

  res = mayor_menor_que(x, a, N);
  printf("Los mayores y los menores que x son %d, %d \n", res.mayor_que, res.menor_que);
  return 0;
}