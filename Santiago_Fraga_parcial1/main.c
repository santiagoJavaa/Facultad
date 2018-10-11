#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "validaciones.h"

#define TAM 20
#define OCUPADO 1
#define LIBRE 0


int main()
{


    ePropietarios propietario[TAM];
    eAutos autos [TAM];
    int flag=0;
    int opcion;
    int index;
    char respuesta[2];
    inicializar(propietario,TAM);
    inicializarAutos (autos,TAM);

    do
    {
        system("cls");
        printf("\n 1.  Dar de alta un propietario \n 2.  Modificar un propietario \n 3.  Dar de baja un propietario \n 4.  Listar propietario \n 5.  Ingresar automovil \n 6.  Listar Automoviles \n 7.  Salir\n");
        printf("\nIngrese una Opcion: ");

        fflush(stdin);
        opcion=validarNumero(opcion);

        switch(opcion)
        {

        case 1:
            index=altapropietario(propietario,TAM);
            if(index==0)
            {
                printf("\n\nPROPIETARIO AGREGADO CON EXITO\n\n");
                propietarioMostrarListado(propietario, TAM);
            }
            else
            {
                printf("\n\nERROR...\n\n");
            }
            system("pause");
            break;

        case 2:
            propietarioMostrarListado(propietario, TAM);
            index=modificarPropietario(propietario, TAM);
            if(index==0)
            {
                printf("\n propietario modificado\n");
                propietarioMostrarListado(propietario, TAM);
            }
            else
            {
                printf("\n ningun propietarioha sido modificado\n");
            }
            system("Pause");
            break;

        case 3:
            propietarioMostrarListado(propietario, TAM);
            index=bajaPropietario(propietario,TAM, autos);
            if(index==0)
            {
                printf("\n propietario dado de baja\n");
                propietarioMostrarListado(propietario, TAM);
                autosMostrarListado(autos, TAM);
            }
            else
            {
                printf("\n ningun propietario  ha sido dado de baja\n");
            }

            system("\nPause");
            break;

        case 4:
            propietarioMostrarListado(propietario, TAM);
            system("pause");
            break;

        case 5:
            propietarioMostrarListado(propietario, TAM);

            index=altaAuto(autos,propietario,TAM);
            if(index==0)
            {
                printf("\n auto ingresado\n");
                autosMostrarListado(autos, TAM);

            }
            else
            {
                printf("\n no se ha ingresado ningun auto\n");
            }
            system("pause");

            break;

        case 6:

             autosMostrarListado(autos, TAM);
             system("pause");

        case 7:

           /* printf("\n\n seguro que quiere salir?(presione 's' para salir): ");
            fflush(stdin);
            gets(respuesta);*/
            break;

        default :
            printf("\n\nERROR: ingrese alguna de las opciones dadas con anterioridad.\n\n");
            system("pause");
            break;
        }

        if(strcmp(respuesta,"s")==0)
        {
            flag=1;
        }
    }
    while(flag==0);

    return 0;
}



