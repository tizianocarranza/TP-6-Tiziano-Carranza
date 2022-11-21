#include <stdio.h>
#include <math.h>


int main() 
{
//Declarar Variables
  int n, i, c;

//Ingresar n 
 printf("Ingrese la cantidad de elementos que tendrá el vector\n");
 scanf("%i", &n);

//Resolver y Presentar por pantalla
  printf("Los valores dentro del arreglo son:\n");
  int v[n];
  c=n-1;
  for(i=0;i<n;i++){
    v[i]=n+c;
    printf("%i\t",v[i]);
    c--;
  }
  return 0;
}