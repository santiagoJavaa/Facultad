#include <stdio.h>
#include <stdlib.h>

int main()
{

    int id[10];
    char nombre[25];
    char apellido[25];

    FILE* archivo;

    archivo = fopen("empleados.csv", "r");

    while(!feof(archivo))
    {

        fscanf(archivo, "%[^,], %[^,], %[^\n]\n", id, nombre, apellido);

        printf("%s -- %s -- %s\n\n", id, nombre, apellido);

    }


    return 0;
}
