#include <stdio.h>
#include <stdlib.h>

int main()
{

     char palabra[20]="Hola";

     //FILE (Es para acceder a los datos).
     FILE* pArchivo;

     pArchivo = fopen("texto.txt", "w");

     fprintf(pArchivo, "%s, Como estan todos?", palabra);

     //Para abrir el archivo. (el primero es PATH, el segundo MODO)
     //PATH (Direccion fisica donde se encuentra el archivo)
     //MODO (El para ver de que manera quiero abrir el archivo, tanto como lectura o escritura)
     //R (read),

     pArchivo = fopen("texto.txt", "r");

     //ES PARA LEER UN ARCHIVO
     //fgets(char , tamaño, *FILE)

     fgets(palabra, 50, pArchivo);

     fclose(pArchivo);

     puts(palabra);


    return 0;
}
