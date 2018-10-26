#include <stdio.h>
#include <stdlib.h>


int main()
{
     char palabra[20]= "Hola Mundo";

  // FILE (Es para acceder a los datos).
     FILE* pArchivo;

     //Para abrir el archivo. (el primero es PATH, el segundo MODO)
     //PATH (Direccion fisica donde se encuentra el archivo)
     //MODO (El para ver de que manera quiero abrir el archivo, tanto como lectura o escritura)
     //W (writte),
     pArchivo = fopen("texto.txt", "w");

     //Escribe sobre el archivo
     ///SIEMPRE ESPERA UNA CADENA.
     fprintf(pArchivo, "\n%s, Como estan todos?\n", palabra);

     //Cierra el archivo para que otra aplicacion la pueda usar.
     fclose(pArchivo);

    return 0;
}
