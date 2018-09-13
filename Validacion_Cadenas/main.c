#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char nombre[20];
    char apellido[20];
    char nombreCompleto[50];
    char buffer[1000];//Cirve para almacenar cadenas
    int i;

    puts("Ingrese su nombre: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer) >19)
    {
        puts("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(nombre, buffer);

    puts("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer) >19)///hasta 19 caracteres pq la cadena tiene 20
    {
        puts("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(apellido, buffer);

    strcpy(nombreCompleto, apellido);

    strcat(nombreCompleto, ", ");

    strcat(nombreCompleto, nombre);

    strlwr(nombreCompleto);///por mas que el usurio ingreso en mayuscula lo pasa a minusculas

    nombreCompleto[0]=toupper(nombreCompleto[0]);///0 es donde iria la mayuscula

    for(i=1 ; i<strlen(nombreCompleto) ; i++)
    {
        if(isspace(nombreCompleto[i])!=0)///devuelve si es espacio o no.
        {
            nombreCompleto[i + 1]=toupper(nombreCompleto[i + 1]); /// i+1 (para que no haga mayuscula en el espacio)
        }
    }

    puts(nombreCompleto);

    return 0;
}
