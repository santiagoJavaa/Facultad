#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"

/*

/*PARA system ("color n n"):
    DEBES COGER UNA COMBINACIÛN DE NUMERO Y LETRA:
Color de consola :
0 = Negro
1 = Azul
2 = Verde
3 = Aguamarina
4 = Rojo
5 = Purpura
6 = Amarillo
7 = Blanco
8 = Gris
9 = Azul claro

Color de texto:
A = Verde claro
B = Aguamarina claro
C = Rojo claro
D = Purpura claro
E = Amarillo claro
F = Blanco brillante*/

int Function_Menu()
{
    char auxRespuesta[20];
    int respuesta;

    system("color F");
    printf("\n-------------------------------------------------------------------------------\n");
    printf("\n\t\t\t BIENVENIDO AL TP 3!!");
    printf("\n\n------------------------------------------------------------------------------\n");
    printf("\n1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n");
    printf("2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).\n");
    printf("3. Alta de empleado\n");
    printf("4. Modificar datos de empleado\n");
    printf("5. Baja de empleado\n");
    printf("6. Listar empleados\n");
    printf("7. Ordenar empleados\n");
    printf("8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n");
    printf("9. Guardar los datos de los empleados en el archivo data.csv (modo binario).\n\n");
    printf("10. Salir\n");
    printf("\n------------------------------------------------------------------------------\n");
    getStringNumeros("\n\tIngrese una opcion del menu: ", auxRespuesta);

    respuesta = atoi(auxRespuesta);
    system("cls");

    return respuesta;
}
