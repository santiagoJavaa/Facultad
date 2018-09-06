#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 5

int main()
{

   int miVector[TAM];
   int i;
   int flag=0;
   int mayor, menor;
   int posMaximo=0, posMinimo=0;
   int j, aux;

   for(i=0 ; i<TAM; i++){

     printf("\nIngrese un numero: ");
     scanf("%d", & miVector[i]);
   }

   for(i=0 ; i<TAM; i++){

       if(miVector[i] %2 ==0){

          printf("\nEl num es par");

       }else{

          printf("\nEl num es impar");
       }
   }
     printf("\n\n");
     for(i=0 ; i<TAM; i++){

        if(miVector[i] > 0){

            printf("\nEl num es positivo");

        }else if(miVector[i] < 0){

            printf("\nEl num es negativo");

        }else{

            printf("\nEl numero es cero");
        }
     }

    printf("\n\n");

    for(i=0 ; i<TAM; i++){

          if(flag ==0 || miVector[i] > mayor){

             mayor = miVector[i];
             posMaximo++;

          }
          if(flag ==0 || miVector[i] < menor){

            menor = miVector[i];
            flag=1;
            posMinimo++;
          }

        }

          printf("\nEl mayor: %d, en la posicion: %d", mayor, posMaximo);
          printf("\nEl menor: %d, en la posicion: %d", menor, posMinimo);


    printf("\n\n");
    printf("\nOrdenados\n");
    printf("\nDe menor a mayor\n");

    for(i=0 ; i<=TAM -1 ; i++){

      for(j=i+1 ; j<TAM ; j++){

         if(miVector[i] > miVector[j]){

            aux = miVector[i];
            miVector[i] = miVector[j];
            miVector[j] = aux;
         }
      }
      printf("\n\t%d\n", miVector[i]);
    }

    printf("\n\n");
    printf("\De mayor a menor\n");


    for(i=0 ; i<=TAM -1 ; i++){

      for(j=i+1 ; j<TAM ; j++){

         if(miVector[i] < miVector[j]){

            aux = miVector[i];
            miVector[i] = miVector[j];
            miVector[j] = aux;
         }
      }
      printf("\n\t%d\n", miVector[i]);
    }

    printf("\n\n");

    getche();

    return 0;
}
