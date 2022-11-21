#include <stdio.h>
#include <math.h>

int main()

{
//Declarar las variables
int i, n, x, j, c;
int vector[100];

i = 1; 
j = 0;
x = 0;
c = 0;

//Ingresar el numero n 
printf("Ingrese la cantidad de numeros que quiere ingresar: ");
scanf("%i", &n);

//Ingresar el vector
while(i <= n)
{
printf("Ingrese el %i valor: ", i);
scanf("%i", &vector[i]);

i++;
}

//Ingresar el valor x
printf("Ingrese el valor x: ");
scanf("%i", &x);

//Determinar cuantos valores son iguales a x
i = 1;

while (i <= n)
{
if (vector[i] == x)
{
    c++;
}

i++;
}

//Presentar por pantalla
printf("La cantidad de valores ingresados iguales a su numero x (%i), son: %i", x, c);


return 0;
}