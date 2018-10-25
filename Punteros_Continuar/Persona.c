#include "Persona.h"
#include <stdio.h>
#include "string.h"

ePersona* nuevaPersona()
{

    ePersona* miPersona;

    miPersona = (ePersona* )malloc(sizeof(ePersona));

    if(miPersona !=NULL)
    {
        miPersona ->edad =0;
        miPersona ->id = 0;
        strcpy(miPersona ->nombre," ");
    }

    return miPersona;

}

int cargarPersona(int edad, char* nombre, int id)
{

    ePersona* perSonita;

    perSonita = nuevaPersona();

    if(perSonita !=NULL)
    {
        perSonita ->edad = edad;
        perSonita ->id = id;
        strcpy(perSonita ->nombre, nombre);

    }

  return perSonita;
}

void MostrarPersona(ePersona* unaPersona)
{

   printf("\nEDAD     NOMBRE    ID\n");

   printf("\n%2d   %10s   %3d\n", unaPersona ->edad, unaPersona->nombre, unaPersona->id);

}

int get_Edad(ePersona* suEdad)
{
   int edadRetorno;

   edadRetorno = suEdad->edad = 13;

   return edadRetorno;

}

int get_RangoEdad(ePersona* suEdad)
{

   int edad;

   if(edad >=18){

       printf("\nUsted es mayor de edad\n");
   }
   else if(edad <=1 && edad >=15)
   {
       printf("\nUsted es menor de edad");

   }else{

       printf("\nUsted es adolecente");
   }

   return edad;

}
