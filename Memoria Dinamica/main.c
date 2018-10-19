#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 5
int main()
{

    int* vector;
    int *pAux;
    int i;


    vector =(int* )malloc(sizeof(int) *CANTIDAD); //PIDO MEMORIA //POR LA CANTIDAD
    //vector =(int* )calloc(sizeof(int), CANTIDAD); //ASIGANA TODO A CERO

    if(vector != NULL)
    {

        for(i=0; i<CANTIDAD; i++)
        {

            *(vector + i) = i + 1;
        }

        for(i=0; i<CANTIDAD; i++)
        {

            printf("\n\tENTERO: %d\n", *(vector + i)); //PARA MOSTRARLO SE USA ASI
        }

        //SIGUE BUSCANDO MEMORIA DESPUES EN EL HEAT,
        //POR EJEMPLO PIDO MEMORIA EN CANTIDAD DE 5, PERO QUIERO 5 MAS A REALOC LE TENGO QUE PASAR LA CANTIDAD TOTAL OSEA 10.

        pAux = realloc(vector, sizeof(int) * (CANTIDAD + 5));

        if(pAux !=NULL)
        {

            vector = pAux;

            for(i=CANTIDAD ; i<CANTIDAD + 5 ; i++)
            {
                *(vector + i) = i + 1;
            }

        }

        printf("\nACA TENGO 10\n");

        for(i=0; i<CANTIDAD + 5; i++)
        {

            printf("\n\tENTERO: %d\n", *(vector + i)); //PARA MOSTRARLO SE USA ASI

        }


        printf("\nACA TENGO 3\n");

        vector = realloc(vector, sizeof(int) * 3);

        for(i=0; i<3; i++)
        {

            printf("\n\tENTERO: %d\n", *(vector + i)); //PARA MOSTRARLO SE USA ASI

        }
    }

    else
    {
        printf("NO QUEDA LUGAR");
    }


    free(vector); //LIBERA MEMORIA


    return 0;
}
