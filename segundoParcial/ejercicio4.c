#include <stdio.h>
#include <stdbool.h>
#define N 2

// TODO: Hacer este ejercicio cuanto antes!

// Estructura de cada producto del stock del negocio
struct producto_t
{
  int codigo;
  int precio;
  int cantidad;
};

// Programar la funcion hay_pedido que dado un codigo de producto, devuelve true si hay
// al menos la cantidad requerida en el stock del comerciante a[].
bool hay_cantidad(int codigo, int cantidad_requerida, struct producto_t a[], int tam)
{
  bool res;
  int i;
  i = 0;
  res = false;
  while (i < tam)
  {
    if (a[i].codigo == codigo && a[i].cantidad >= cantidad_requerida)
    {
      res = true;
    }
    i = i + 1;
  }
  return res;
}

// Con esta funcion pedimos los valores de entrada de datos
// Permite al usuario definir los datos de un arreglo de tipo producto_t
void pedirArreglo(struct producto_t a[], int n_max)
{
  int i;
  i = 0;
  while (i < n_max)
  {
    // Aqui le pedimos al usuario que ingrese el valor del codigo del producto en un cierto lugar del arreglo
    printf("Ingresa un numero entero para el codigo del producto en la posicion %d del arreglo\n", i);
    scanf("%d", &a[i].codigo);
    // Aqui le pedimos al usuario que ingrese el valor del precio del producto en un cierto lugar del arreglo
    printf("Ingresa un numero entero para el precio del producto en la posicion %d del arreglo\n", i);
    scanf("%d", &a[i].precio);
    // Aqui le pedimos al usuario que ingrese el valor de la cantidad de stock del producto en un cierto lugar del arreglo
    printf("Ingresa un numero entero para la cantidad de stock del producto en la posicion %d del arreglo\n", i);
    scanf("%d", &a[i].cantidad);
    i = i + 1;
  }
}

// En la main le pedimos al usuario el contenido de un arreglo a[] de tamaño constante N = 3
// con elementos de tipo struct producto_t.
int main(void)
{
  struct producto_t a[N];
  int cant, cod;
  pedirArreglo(a, N);
  printf("Ingrese un numero entero para el codigo del producto solicitado\n");
  scanf("%d", &cod);
  printf("Ingrese un numero entero para la cantidad del producto solicitado\n");
  scanf("%d", &cant);
  if (hay_cantidad(cod, cant, a, N))
  {
    printf("True\n");
  }
  else
  {
    printf("False\n");
  }
  return 0;
}