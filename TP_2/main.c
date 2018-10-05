#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"
#include "ArrayEmployees.h"


int main()
{
  int indice;
  int opcion=0;
  char auxiliarOpcionStr[20];
  int flag=0;

  int autoIncrementalId(eEmpleado arrayEmpleados[], int tamanio);

  eEmpleado arrayEmpleado[TAM_Empeleados];

  if(inicializarEstado(arrayEmpleado, TAM_Empeleados))
  {
      do{

         system("cls");

         getStringNumeros("\t\n1. Alta \n2. Listar \n3. Baja \n4. Modificar \n5. Informar \n6. Salir \n\n\Ingrese una opcion: ", auxiliarOpcionStr);

         opcion = atoi(auxiliarOpcionStr);



         switch(opcion){

            case 1:
                   //indice = AltaEmpleados(arrayEmpleado);
                   AltaEmpleados_Harcodeados(arrayEmpleado);

                   if(indice){

                    printf("\nEMPLEADO CARGADO EN EL SISTEMA!!\n\n");
                   }

                   system("pause");
                   break;

            case 2:
                   /*//MIRAR ACA
                   if(flag == 1)
                   {
                       if(listarEmpleados(arrayEmpleado, TAM_Empeleados))
                          {

                              printf("\nLista de empleados impresa\n");

                          }else{

                              printf("\nOcurrio un error\n");
                          }

                   }else{

                     printf("\nNo puede informar sobre los empleados si no se han ingresado\n");

                   }*/

                   listarEmpleados(arrayEmpleado, TAM_Empeleados);

                   system("pause");
                   break;

            case 3:
                   listarEmpleados(arrayEmpleado, TAM_Empeleados);
                   bajaEmpleados(arrayEmpleado, TAM_Empeleados);
                   system("pause");
                   break;

            case 4:
                   listarEmpleados(arrayEmpleado, TAM_Empeleados);
                   modificarEmpleados(arrayEmpleado, TAM_Empeleados);
                   system("pause");
                   break;

            case 5:
                   break;

            default :
                    printf("\nEsta opcion no existe\n");
                    break;
         }

      }while(opcion !=5);

  }

    return 0;
}
