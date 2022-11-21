#include <stdio.h>
#include <math.h>

int main()

{
    //Declarar las variables 
    int vector[100];
    int i, n, max, pos;

    i = 1;
    max = 0;
    pos = 0;


    //Ingresar el numero n y el vector, determinar el elemento mayor y su posicion
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf("%i", &n);

    while(i <= n)
    {
        printf("ingrese su %i valor: ", i);
        scanf("%i", &vector[i]);

        if(i == 1)
        {
            max = vector[i];
            pos = i;
        }
        else
        {
            if (vector[i] > max)
            {
                max =  vector[i];
                pos = i;
            }   
        }
        i++;
    }

    //Presentar por pantalla
    printf("El elemento mayor ingresado es: %i, y se encuentra en la posicion: %i", max, pos);


    return 0;  
}