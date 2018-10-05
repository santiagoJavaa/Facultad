#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"
#include "ArrayEmployees.h"


int inicializarEstado(eEmpleado arrayEmpleados[], int tamanio)
{

    int i;
    int retorno= 0;

    if(arrayEmpleados != NULL)
    {

        for(i=0; i<tamanio; i++)
        {

            arrayEmpleados[i].estado = VACIO; //En 0 se puede agregar empleados
        }

        retorno = 1;
    }

    return retorno;
}

int autoIncrementalId(eEmpleado arrayEmpleados[], int tamanio)
{
    int i;
    static int id=0;
    static int flag=0;

    for(i=0; i<tamanio; i++)
    {

        if(arrayEmpleados[i].estado == OCUPADO && arrayEmpleados[i].id >= id && flag ==0)
        {

            id = arrayEmpleados[i].id;
        }
    }

    id ++;
    flag =1;

    return id;
}

int buscarLibre(eEmpleado arrayEmpleados[], int tamanio)
{

    int i;
    int indice= -1;

    for(i=0; i<tamanio; i++)
    {

        if(arrayEmpleados[i].estado == VACIO)
        {

            indice = i;
            break;
        }

    }

    return indice;
}

int buscarPorId(eEmpleado arrayEmpleados[], int tamanio, int id)
{

    int i;
    int indice=-1;

    for(i=0; i<tamanio; i++)
    {

        if(arrayEmpleados[i].estado == OCUPADO && arrayEmpleados[i].id == id)
        {

            indice = i;
            break;

        }

    }
    return indice;
}

int AltaEmpleados(eEmpleado arrayEmpleados[])
{
    int indice, retorno=0, auxId;

    char auxNombreStr[50], auxApellidoStr[50], auxSalarioStr[50], auxSectorStr[50];
    float aux_Salario;
    int aux_Sector;

    indice = buscarLibre(arrayEmpleados, TAM_Empeleados);

    if(indice >= 0)
    {

        auxId = autoIncrementalId(arrayEmpleados, TAM_Empeleados);

        getStringLetras("\nIngrese nombre: ", auxNombreStr);

        getStringLetras("\nIngrese apellido: ", auxApellidoStr);

        getStringNumerosFlotantes("\nIngrese salario: ", auxSalarioStr);

        aux_Salario = atof(auxSalarioStr);

        getStringNumeros("\nIngrese sector: ", auxSectorStr);

        aux_Sector = atoi(auxSectorStr);

        printf("\n");

        arrayEmpleados[indice].id = auxId;
        strcpy(arrayEmpleados[indice].nombre, auxNombreStr);
        strcpy(arrayEmpleados[indice].apellido, auxApellidoStr);
        arrayEmpleados[indice].salario = aux_Salario;
        arrayEmpleados[indice].sector = aux_Sector;
        arrayEmpleados[indice].estado = 1;
        retorno = 1;

    }
    else
    {

        printf("\nNO EXISTE ESPACIO DISPONIBLE\n\n");
    }

    return retorno;
}

void AltaEmpleados_Harcodeados(eEmpleado arrayEmpleados[])
{

    int id[6] = {101, 102, 103, 104, 105, 106};
    char nombre[][50]= {"Juan", "Santiago", "Ferico", "Analia", "Damian", "Alejandro"};
    char apellido[][50] = {"Martellota", "Fraga", "Liguori", "Ibarra", "Balsis", "Vazquez"};
    float salario[6]= {12, 11, 14, 10, 9, 20};
    int sector[6]= {1, 2, 3, 4, 5, 6};
    int i;

    for(i=0; i<6; i++)
    {

        arrayEmpleados[i].id = id[i];
        strcpy(arrayEmpleados[i].nombre, nombre[i]);
        strcpy(arrayEmpleados[i].apellido, apellido[i]);
        arrayEmpleados[i].salario = salario[i];
        arrayEmpleados[i].sector = sector[i];
        arrayEmpleados[i].estado = OCUPADO;
    }
}

void listarEmpleados(eEmpleado arrayEmpleados[], int tamanio)
{
    int i;

    printf("\n| ID |  NOMBRE  |  APELLIDO  |  SALARIO  |  SECTOR |\n");

    for(i=0; i< tamanio; i++)
    {

        if(arrayEmpleados[i].estado == OCUPADO)// En uno me va a mostrar lo que esta en alta, en 0 no pq sino muestra todo el array
        {

            printf("\n%4d  %10s  %10s %10.2f  %4d\n\n\n", arrayEmpleados[i].id, arrayEmpleados[i].nombre
                   , arrayEmpleados[i].apellido, arrayEmpleados[i].salario
                   , arrayEmpleados[i].sector);

        }
    }
}

int bajaEmpleados(eEmpleado arrayEmpleados[], int tamanio)
{

    int retorno=0;
    char auxiliar_Id[20];
    int id =0;
    int indice = -1;

    getStringNumeros("\nIngrese id a dar de baja: ", auxiliar_Id);

    id = atoi(auxiliar_Id);

    indice = buscarPorId(arrayEmpleados, TAM_Empeleados, id);

    if(indice >= 0)
    {

        arrayEmpleados[indice].estado = ELIMINADO;

        printf("\nEl empleado fue dado de baja\n\n");
        retorno = 1;

    }

    return retorno;
}

int modificarEmpleados(eEmpleado arrayEmpleados[], int tamanio)
{
    int opcion=0;
    int indice=0;
    int retorno=0;

    char auxIdStr[50], auxNombreStr[50], auxApellidoStr[50], auxSalarioStr[50], auxSectorStr[50], auxOpcionStr[50];
    int id=0;
    float aux_Salario;
    int aux_Sector;


    if(arrayEmpleados != NULL && tamanio>0)
    {

        getStringNumeros("\nIngrese id a modificar:", auxIdStr);

        id = atoi(auxIdStr);

        indice = buscarPorId(arrayEmpleados, TAM_Empeleados, id);

    }

    if(indice > -1)
    {

        do
        {
            printf("\n\t----MODIFICAR----\n");

            getStringNumeros("\nQue desea modificar\n\n1. NOMBRE \n2. APELLIDO \n3. SALARIO \n4. SECTOR \n5. SALIR \n\nIngrese una opcion: ", auxOpcionStr);

            opcion = atoi(auxOpcionStr);

            switch(opcion)
            {

            case 1:
                getStringLetras("\nIngrese nombre: ", auxNombreStr);
                strcpy(arrayEmpleados[indice].nombre, auxNombreStr);
                break;

            case 2:
                getStringLetras("\nIngrese apellido: ", auxApellidoStr);
                strcpy(arrayEmpleados[indice].apellido, auxApellidoStr);
                break;

            case 3:
                getStringNumerosFlotantes("\nIngrese salario: ", auxSalarioStr);
                aux_Salario = atof(auxSalarioStr);
                arrayEmpleados[indice].salario = aux_Salario;
                break;

            case 4:
                getStringNumeros("\nIngrese sector: ", auxSectorStr);
                aux_Sector = atoi(auxSectorStr);
                arrayEmpleados[indice].sector = aux_Sector;
                break;

            case 5:
                break;

            }

            printf("\n| ID |  NOMBRE  |  APELLIDO  |  SALARIO  |  SECTOR |\n");

             printf("\n%4d  %10s  %10s %10.2f  %4d\n\n\n", arrayEmpleados[indice].id, arrayEmpleados[indice].nombre
                   , arrayEmpleados[indice].apellido, arrayEmpleados[indice].salario
                   , arrayEmpleados[indice].sector);

            retorno = 1;

        }
        while(opcion !=5);

    }


    return retorno;

}


