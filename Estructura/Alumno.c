#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"

#define A 5

eAlumno CargarAlumno()
{
   eAlumno miAlumno; ///Busca espacio en memoria

   printf("\nIngrese legajo: ");
   scanf("%d", &miAlumno.legajo);

   printf("\nIngrese nombre: ");
   fflush(stdin);
   gets(miAlumno.nombre);

   printf("\nIngrese promedio: ");
   scanf("%f", &miAlumno.promedio);

   printf("\nIngrese direccion: ");
   fflush(stdin);
   gets(miAlumno.direccion);

   return miAlumno;

}
void mostrarAlumno(eAlumno alumnoParametro)
{

    printf("\n%6d -- %6s -- %6.2f -- %6s\n", alumnoParametro.legajo
           , alumnoParametro.nombre, alumnoParametro.promedio, alumnoParametro.direccion);

}

void CargarListado(eAlumno listado[], int tam)
{

   int i;

   for(i=0 ; i<tam ; i++)
    {
      listado[i] = CargarAlumno();///copia lo que contiene miAlumno
    }
}

void cargarListado(eAlumno listado[], int tam)
{
    int i;
    for(i=0 ; i<tam ; i++)

    {
       mostrarAlumno(listado[i]);
    }
}
