// #include <stdio.h>
// #include <stdbool.h>
// #include <assert.h>

// struct organizar_t
// {
//   int primero;
//   int segundo;
// };

// struct organizar_t organizar(bool b, int x, int y)
// {
//   struct organizar_t org;
//   if (b != 0)
//   {
//     org.primero = x;
//     org.segundo = y;
//   }
//   else
//   {
//     org.primero = y;
//     org.segundo = x;
//   }
//   return org;
// }

// int main(void)
// {
//   bool b;
//   int temp;
//   int x, y;
//   printf("Ingrese valor para boleano donde 0 es false y 1 es true\n");
//   scanf("%d", &temp);
//   printf("Ingrese valor para x\n");
//   scanf("%d", &x);
//   printf("Ingrese valor para y\n");
//   scanf("%d", &y);
//   assert(temp == 0 || temp == 1);
//   b = temp;
//   struct organizar_t org;
//   org = organizar(b, x, y);
//   printf("El valor booleano es b = %d, por lo tanto en primer lugar tenemos %d y en segundo lugar %d", b, org.primero, org.segundo);
//   return 0;
// }

#include <stdio.h>
#include <stdbool.h>

struct organizar_t
{
  int primero;
  int segundo;
};

struct organizar_t organizar(bool b, int x, int y)
{
  struct organizar_t res;

  if (b)
  {
    res.primero = x;
    res.segundo = y;
  }
  else
  {
    res.primero = y;
    res.segundo = x;
  }
  return res;
}

int main(void)
{
  bool b;
  int x, y, bInput;
  struct organizar_t res;
  printf("Ingrese 0 para false o 1 para true\n");
  scanf("%d", &bInput);
  b = bInput;
  printf("Ingrese el primer entero\n");
  scanf("%d", &x);

  printf("Ingrese el segundo  entero\n");
  scanf("%d", &y);

  res = organizar(b, x, y);

  printf("El resultado organizado es: %d, %d \n", res.primero, res.segundo);
  return 0;
}