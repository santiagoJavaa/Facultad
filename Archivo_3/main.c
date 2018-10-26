#include <stdio.h>
#include <stdlib.h>

int main()
{

   FILE *archivo;

   char p1[20];
   char p2[20];

   archivo = fopen("texto.txt", "w");

   fprintf(archivo, "Hola\n");

   fprintf(archivo, "Chau\n");

   fclose(archivo);

   archivo = fopen("texto.txt", "r");

   fgets(p1, 20, archivo);

   puts(p1);

   fgets(p2, 20, archivo);

   puts(p2);

    return 0;
}
