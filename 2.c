#include <stdio.h>
#include <math.h>

int main()

{
//Declarar las variables
int i, m, x, j, p, n;
int vector[100];

i = 1; 
j = 0;
x = 0;
p = 0;
n = 0;


//Ingresar el numero m 
printf("Ingrese la cantidad de numeros que quiere ingresar: ");
scanf("%i", &m);

//Ingresar el vector y acumular positivos y negativos
while(i <= m)
{
printf("Ingrese el %i valor: ", i);
scanf("%i", &vector[i]);

if (vector[i] >= 0)
{
    p = p + vector[i];
}
else
{
    n = n + vector[i];
}

i++;
}



//Presentar por pantalla
printf("\nSuma de todos los numeros positivos ingresados: \n %i", p);
printf("\n\nSuma de todos los numeros negativos ingresados: \n %i", n);

return 0;
}