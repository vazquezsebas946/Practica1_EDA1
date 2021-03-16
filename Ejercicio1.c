#include <stdio.h>
#include <stdlib.h>

//Creado por Vazquez Reyes Sebastian y Muñoz Cruz Juan Carlos el dia 4/03/2021

int main()
{
    int i;//declaramos la funcion que nos ayudara a realizar el ciclo siguiente:
    int arreglo[]={2,4,6,8,10,12,14,16,18,20};//declaramos el arreglo y los valores que tendran sus elementos
    for (i=0; i<10; i++)
    {
          printf("El elemento No: %d tiene como direccion de memoria: %p, y su direccion en entero: %d \n" , i+1, &arreglo[i], &arreglo[i]);
          //creamos un ciclo que imprima la direccion de memoria de cada elemento del arreglo, primero la imprimi de manera hexadecimal y luego como entero
    }
    printf("\n\nLa dirección de memoria para el primer elemento es la sig.: %p, y la dirección de memoria del arreglo es: %p", &arreglo[0], &arreglo);
    //esta instruccion imprimira la direccion de memoria de la variable arreglo y la de su primer elemento.
    //se puede observar que poseen la misma direccion
    return 0;
}
