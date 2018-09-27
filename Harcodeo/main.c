#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define A 100
#define OCUPADO 1

///Estructura anidada con alumno

typedef struct{

   int dia;
   int mes;
   int anio;

}eFecha;


typedef struct{

   int legajo;
   char nombre[50];
   float promedio;
   char direccion[50];
   int estado;

   eFecha fechaNaciomiento;

}eAlumno;
//------------------------IRIA EN OTRA BIBLIOTECA
typedef struct{

  int id;
  char nombre[30];
  int duracion;
  char profesor[20];

}eCurso;

void inicializarAlumnosConDatos(eAlumno [], int);
void mostrarCursoAlumno(eAlumno alum);

//----

void inicializarCurso(eCurso * cursos);
void mostrarTodoslosAlumnos(eCurso* alum);

int main()
{

    eAlumno miAlumno[A];

    eCurso miCurso[A];

    inicializarAlumnosConDatos(miAlumno, A);

    mostrarTodoslosCursos(miCurso, 3);

    return 0;
}

void inicializarAlumnosConDatos(eAlumno listado[], int tam)
{

   int legajo[5]={1, 2, 3, 4, 5};
   char nombre[5][50]={"Juan", "Maria", "Pedro", "Susana", "Luis"};
   float promedio[5]={3, 8, 6, 4, 7};
   char direccion[5][50]={"aaa", "bbb", "ccc", "ddd", "eee"};
   int i;

   for(i=0; i<5; i++){

      listado[i].legajo = legajo[i];
      strcpy(listado[i].nombre, nombre[i]);
      listado[i].promedio = promedio[i];
      strcpy(listado[i].direccion, direccion[i]);
      listado[i].estado = OCUPADO;
   }
}

void inicializarCurso(eCurso * cursos)
{
   int id[3]={100, 101, 102};
   char nombre[3][30]={"PHP", "C#", "VP"};
   int duracion[3]={3, 4, 5};
   char profesor[3][20]={"Octavio", "German", "Baus"};
   int i;

   for(i=0; i<3; i++){

      cursos[i].id = id[i];
      strcpy(cursos[i].nombre, nombre[i]);
      cursos[i].duracion = duracion[i];
      strcpy(cursos[i].profesor, profesor[i]);

   }
}

void mostrarCurso(eCurso curso)
{
    printf("%s -- %s -- %d", curso.nombre, curso.profesor, curso.duracion);

}

void mostrarTodoslosCursos(eCurso* cursos, int tam)
{
    int i;

    for(i=0; i<3 ; i++){


        mostrarCurso(cursos[i]);

    }
}
