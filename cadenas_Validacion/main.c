#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 3

/*

A)CARGA ALEATORIA
B)MODIFICAR (legajo): Se ingresa el legajo, lo busca si lo encuentra modifica la nota 1
C)Informes

INFORMES
 1-Los alumnos con promedio 6 o mas
 2-El /los alumnos con maximo promedio
 3-La alumna/s con minimo promedio
 4-Cantidad de alumnos desaprobados (se aprueba con 6 o mas en el promedio
 5-Cantidad de alumnos aprobados
 6-porcentaje de aprobados y desaprobados
 7-Los alumnos que se llamen juan
 8-Ordenar los datos alfabeticamente por nombre
 9-Ordenar los datos por nombre y ante igualdad de nombre por promedio
 10-Mostrar los alumnos cuo nombre comiense con p
 11-Ordenar alumnos por sexo
 12-Realizar un grafico que muestre:
   -alumnos entre 15-10(inclusive)
                  19 y 25(inclusive)
                  26 o mas

*/

float calcularPromedio(int, int, int);
int cargarAlumnos(char [][50], int [], int[], int[], float[],  int);
int mostrarAlumnos(char [][50], int [], int[], int[], float[],  int);

///INFORMES

float promedios_Seis(float [], int);
int maxi_min(float prom[], int tamanio);

int main()
{

    char nombre[TAM][50];
    int nota1[TAM], nota2[TAM], nota3[TAM];
    float promedio[TAM];
    char sexo, repuesta = 's';
    int opcion;

    do{

      system("cls");
      printf("\nBienvenido\n\n");
      printf("\n1. Carga de alumnos");
      printf("\n2. Mostrar alumnos");
      printf("\n3. mayor promedio");
      printf("\n4. Salir");
      printf("\nIngrese una opcion del menu: ");
      scanf("%d", &opcion);

      switch(opcion)
      {

        case 1:
               cargarAlumnos(nombre, nota1, nota2, nota3, promedio, TAM);
               system("pause");
               break;

        case 2:
               mostrarAlumnos(nombre, nota1, nota2, nota3, promedio, TAM);
               system("pause");
               break;

        case 3:
               maxi_min(promedio, TAM);
               break;

        case 4:
               repuesta = 'n';
               break;


      }

    }while(repuesta == 's' || repuesta == 'S');


    mostrarAlumnos(nombre, nota1, nota2, nota3, promedio, TAM);

    return 0;
}

float calcularPromedio(int n1, int n2, int n3)
{
    float promedio;

    promedio = (float)(n1 + n2 + n3) / TAM;

    return promedio;
}

int cargarAlumnos(char nombreCompleto[][50], int n1[], int n2[], int n3[], float prom[], int tamanio)
{
    int i;

    for(i=0 ; i<tamanio ; i++){

        printf("\nIngrese su nombre: ");
        fflush(stdin);
        gets(nombreCompleto[i]);

        printf("\nIngrese nota 1: ");
        scanf("%d", &n1[i]);

        printf("\nIngrese nota 2: ");
        scanf("%d", &n2[i]);

        printf("\nIngrese nota 3: ");
        scanf("%d", &n3[i]);

        prom[i] = calcularPromedio(n1[i], n2[i], n3[i]);


    }

    return 0;
}

int mostrarAlumnos(char nombreCom[][50], int n1[], int n2[], int n3[], float prom[], int tamanio)
{

     int i;

        printf("\n\n");
        printf(" %20s     %6s    %6s   %6s   %8s  \n", "Nombre", "Nota 1", "Nota 2", "Nota 3", "Promedio");

        for(i=0 ; i<tamanio ; i++)
        {

         printf("\n%20s    %6d    %6d    %6d     %.2f  ", nombreCom[i], n1[i], n2[i], n3[i], prom[i]);

        }

        printf("\n\n");
}

float promedios_Seis(float prom[], int tamanio)
{
    int i;
    int contPromAprobadas=0, contPromDesaprobadas=0;;
    int acumPromAprobadas=0, acumDesaprobadas=0;

    for(i=0 ; i<tamanio ; i++){

        if(prom >6) {


         contPromAprobadas++;
         acumPromAprobadas += prom;

        }else if(prom < 6) {

         contPromDesaprobadas++;
         acumDesaprobadas += prom;

        }
    }
}

int maxi_min(float prom[], int tamanio)
{

   int flag =0;
   int max, min;
   int i;

   for(i=0 ; i<tamanio ; i++){

        if(flag==0 || prom[i] > max)
        {
            max = prom;
        }

        if(flag==0 || prom[i] < min)
        {
            min = prom;
            flag=1;
        }
    }

}

