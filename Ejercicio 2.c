#include <stdio.h>
#include <stdlib.h>

//Creado por Berdejo Guzmán Leonardo Ariel el dia 4/03/2021

int main()
{
    int j, k; //variables que nos serviran para almacenar los valores del arreglo y crear un ciclo que le permita al usuario introducir los valores
    int arr[3][3];//declaramos el arreglo
    for(j=0; j<3; j++)//empieza el ciclo con valores de j en 1 y siguiendo hasta el 3
    {
        for(k=0; k<3; k++)//asigna los valores de k en 1 hasta el 3 y continua con el ciclo
        {
            printf("Dame el valor de (%d, %d): ", j+1, k+1);
            scanf("%d", &arr[j][k]);
            //en estas instrucciones, el usuario ingresa los valores del arreglo empezando en 1,1 hacia 1,2, etc. y terminando en 3,3
        }

    }

    //INCISO A IMPRIMIR MATRIZ EN ENTEROS

    for(j=0; j<3; j++)
    {
        for(k=0; k<3; k++)
        {
            printf("\nElemento(%d,%d) Dirección de memoria en entero:%d", j+1, k+1, &arr[j][k]);
            //usamos el mismo ciclo anterior para imprimir las direcciones de memoria en entero de cada elemento del arreglo, solo cambiando algunas instrucciones para que en vez de dar valores, enseñe las direcciones
        }
        //INCISO B
    }
    printf("\n\n MATRIZ CON DIRECCIONES: \n");
    for(j=0; j<3; j++)
    {
        for(k=0; k<3; k++)
        {
            printf("|%p",&arr[j][k]);
        }
        printf("|\n");
        //este ciclo imprime las direcciones de memoria del arreglo en forma de matriz
    }

    //INCISO C
    printf("\n\nLa dirección de memoria para el primer elemento es la sig.: %p, y la dirección de memoria del arreglo es: %p \n", &arr[0][0], &arr);
    //por ultimo, esta instruccion imprime las direcciones de memoria del primer elemento del arreglo y del arreglo en si, para poder idenfiticar que tienen las mismas direcciones
    return 0;

}
