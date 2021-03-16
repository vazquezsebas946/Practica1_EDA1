#include <stdio.h>

//Creado por Martinez Maldonado Luis Enrique el dia 05/03/2021

int main ()
{
    int caras, filas, columnas;//declaracion de las variables que crearan el ciclo para la obtencion de datos y en las que se guardara el valor de los elementos
    int array[4][3][2];//declaracion del arreglo tridimensional de 4x3x2

//INCISO a LECTURA DE DATOS
    for(caras=0; caras<4; caras++)//empieza el ciclo con el valor de caras en 1 avanzando hasta el 4
    {
        for(filas=0; filas<3; filas++)//luego el ciclo continua con las filas en 1 avanzando hasta el 3
        {
            for(columnas=0; columnas<2; columnas++)//por ultimo, las columnas empiezan desde el 1 hasta el 2
            {
                printf("\nIngrese el elemento (%d,%d,%d):", caras+1, filas+1, columnas+1);
                scanf("%d", &array[caras][filas][columnas]);
                //Este ciclo es el mismo del ejercicio anterior, nos ayuda a darle valores a los elementos del arreglo
            }
        }
    }
//IMPRESION DE ELEMENTOS
    for(caras=0; caras<4; caras++)
    {
        for(filas=0; filas<3; filas++)
        {
            for(columnas=0; columnas<2; columnas++)
            {
                printf("\nElemento(%d,%d,%d) dirección de memoria %p en entero:%d", caras+1, filas+1, columnas+1, &array[caras][filas][columnas], &array[caras][filas][columnas]);
                //El mismo ciclo de arriba, solo que esta vez se encargara de imprimir las direcciones de memoria de cada elemento en formato de entero, en vez de darles un valor a los elementos
            }
        }
    }
//INCISO b
    for(caras=0; caras<4; caras++)
    {
        printf("\nCARA %d\n", caras+1);
        for(filas=0; filas<3; filas++)
        {
            for(columnas=0; columnas<2; columnas++)
            {
                printf("    %p", &array[caras][filas][columnas]);
            }
            printf("\n");
            //este ciclo imprime los valores de las direcciones de memoria de cada elemento pero organizados como si fueran matrices
        }
    }
//INCISO C, IMPRESIÓN DE LA DIRECCIÓN DE MEMORIA
    printf("\n\n\nDIRECCION DE MEMORIA DEL PRIMER ELEMENTO (1,1,1):%p",&array[0][0][0]);
    printf("\nDIRECCION DE MEMORIA DE LA VARIABLE array:%p", &array);
    //estas instrucciones nos mostraran el valor del primer elemento del arreglo y del arreglo en si, para poder comprobar que poseen la misma direccion de memoria
    return 0;
}
