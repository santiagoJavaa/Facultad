#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    FILE* pArchivo;

    pArchivo = fopen("archivoBinario.dat", "wb");

    //PUEDO ESCRIBIR TEXTO
    fwrite(&num, sizeof(int), 1, pArchivo);

    fclose(pArchivo);

    printf("El numero es: %d", num);

    return 0;
}
