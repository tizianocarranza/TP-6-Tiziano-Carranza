#include <stdio.h>
#include <math.h>

int main()

{
    //Declarar las variables 
    int vector[100];
    int i, n, c, x, numero;

    i = 1;
    numero =  1;


    //Ingresar el numero n, c, cargar el vector, y realizar las operaciones
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf("%i", &n);
    printf("\nIngrese el numero c: ");
    scanf("%i", &c);


    while(i <= n)
    {
        printf("ingrese su %i valor: ", i);
        scanf("%i", &vector[i]);

        numero = numero * (vector[i] - c);

        i++;
    }

    //Presentar por pantalla
    printf("El valor de numero es: %i", numero);


    return 0;  
}