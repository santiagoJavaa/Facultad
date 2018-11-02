#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"


int main()
{
    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();

    do{

        option = Function_Menu();

        switch(option)
        {

            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;

            case 2:
                   break;

            case 3:
                  break;

            case 4:
                  break;

            case 5:
                  break;

            case 6:
                  break;

            case 7:
                  break;

            case 8:
                  break;

            case 9:
                  break;

            case 10:
                    system("color A");
                    printf("\n--------------------------------------------------------------------------------\n");
                    printf("\n\t\t\tFIN DEL PROGRAMA!!!\n");
                    printf("\n--------------------------------------------------------------------------------\n");
                    break;

            default:
                    printf("\n--------------------------------------------------------------------------------\n");
                    system("color C");
                    printf("\n\tERROR...DEBE INGRESAR UNA OPCION ENTRE [1 - 10], GRACIAS!\n\n");
                    printf("\n--------------------------------------------------------------------------------\n");
                    system("pause");
                    system("cls");


        }

    }while(option != 10);

    return 0;
}

