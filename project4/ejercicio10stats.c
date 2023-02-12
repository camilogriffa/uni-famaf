/*
(Funcion stats). Hacer un programa en un archivo nuevo stats.c, que calcula el m´ınimo, el
m´aximo, y el promedio de un arreglo no vac´ıo de n´umeros flotantes (tipo float). La funci´on
tiene el siguiente tipo:
struct datos_t stats(float a[], int tam)
donde la estructura datos_t se define como sigue:
struct datos_t {
float maximo;
float minimo;
float promedio;
};
La funcion pedida debe implementarse con un unico ciclo. En la funcion main pedir al usuario
los datos del arreglo e imprimir en pantalla los tres valores devueltos por la funcion.

*/

struct datos_t stats(float a[], int tam){
    int i = 0;
    int max = 0;
    int min = 0;
    while (i < tam){
     if (a[i] < a[i + 1]){
         min = a[i];
         max = a[i + 1];
        ;      
     }
     else { 
         if (a[i] == a[i + 1]){
             max = a[i];
             min = a[i];
            }
         else {
             max = a[i];
             min = a[i + 1];
            }    
         }
     i = i + 1;
     }
 struct datos_t stat;
 stat.maximo = max;
 stat.minimo = min;
 int x = sumatoria(a,tam);
 stat.promedio = x / tam;
 return stat;
}
int main (void){
 int tam;
 printf("Ingrese el tamaño del arreglo\n");
 scanf("%d", &tam);
 assert(tam > 0);
 int a[tam];
 pedirArreglo(a,tam);
 struct datos_t stat;
 stat.maximo = 0;
 stat.minimo = 0;
 stat.promedio = 0;
 stats(a,tam);
 printf("Maximo = %f   Minimo = %f   Promedio = %f\n",stat.maximo,stat.minimo,stat.promedio);
 return 0;
}