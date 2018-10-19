#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 5


typedef struct{

  int a;
  char b;

}eDatos;

eDatos* funcion();
void mostrarDatos();

int main()
{

    mostrarDatos();

    return 0;
}


eDatos* funcion()
{

    eDatos* pDato;

    //CREO ESPACIO EN EL HEAT/MONTON
    pDato = (eDatos*)malloc(sizeof(eDatos));

    if(pDato != NULL)
    {
      pDato->a = 4;
      pDato->b = 'f';

    }
    else{

       printf("\nNo queda espacio libre\n");

    }

    return pDato;

}

void mostrarDatos()
{
  eDatos* d;

  d = funcion();

  printf("\n ENTERO - CARACTER\n");
  printf("\n   %2d        %2c\n", d->a, d->b);

}
