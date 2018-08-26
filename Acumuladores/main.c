#include <stdio.h>
#include <stdlib.h>

int main()
{

   float numCalificaciones, promedio;
   float acumulador =0;
   float numDeMaterias;
   int i;

   printf("\nNumero de materias ?: ");
   scanf("%f", &numDeMaterias);

   for(i=0; i<numDeMaterias ; i++){

     printf("\nIngrese la calificacion %d: ", i+1);///Para q arranque de uno
     scanf("%f", &numCalificaciones);

     acumulador += numCalificaciones;

     promedio = acumulador / numDeMaterias;

   }

    printf("El promedio es: %.2f", promedio);

    return 0;
}
