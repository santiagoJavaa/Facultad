#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

int main()
{

    ePersona* unaPersona;

    unaPersona = nuevaPersona();

    unaPersona = cargarPersona(20, "Santiago", 29);

    int edad;

    edad = get_Edad(unaPersona);

    MostrarPersona(unaPersona);

    edad = get_RangoEdad(unaPersona);

    return 0;
}
