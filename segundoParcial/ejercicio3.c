#include <stdio.h>
#define N 5

int cantidad(int array[], int tam, int elem)
{
  int i = 0;
  int e = 0;
  while (i<tam)
  {
    if(array[i]==elem)
    {
      e++;
    }
    i++;
  }
  return e;
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
  int array[N];
  int x;
  printf("Ingrese valor de x \n");
  scanf("%d", &x);
  printf("Ingrese valores hasta completar el array \n");
  pedirArreglo(array, N);
  printf("El resultado de la funcion es %d\n", cantidad(array,N,x));
}

// #include <stdio.h>
// #include <assert.h>
// #define N 5

// void pedirArreglo(int a[], int n_max)
// {

//   int i;
//   for (i = 0; i < n_max; i++)
//   {
//     printf("\nIngrese la posicion %d del arreglo\n", i);
//     scanf("%d", &a[i]);
//   }
// }

// int cantidad(int array[], int tam, int elem)
// {

//   assert(tam >= 0);

//   int i = 0;
//   int cant = 0;
//   while (i < tam)
//   {

//     if (array[i] == elem)
//     {
//       cant = cant + 1;
//     }
//     i = i + 1;
//   }

//   return cant;
// }

// int main()
// {

//   int a[N];
//   int x, i, elem;
//   i = 0;

//   pedirArreglo(a, N);

//   printf("\nPor favor ingrese un valor para el cual quiera comparar los valores del arreglo\n");
//   scanf("%d", &elem);

//   x = cantidad(a, N, elem);

//   printf("\nLa cantidad de elementos iguales a %d es %d\n", elem, x);
//   return 0;
// }