#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{

    Employee* auxiliarEmpleados;

    char buffer[150];
    char buffer_Id[10];
    int auxEnteroId=0;
    char buffer_Nombre[50];
    char buffer_HorasTrabajadas[20];
    int auxHorasTrabajadas=0;
    char buffer_Salario[20];
    int auxSalario=0;

    if((pFile != NULL && pArrayListEmployee !=NULL))
    {

      fscanf(pFile, "%s\n", buffer);

      while(!feof(pFile)){

        auxiliarEmpleados = employee_new();



      }

    }




}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
