

typedef struct{

   int legajo;
   char nombre[50];
   float promedio;
   char direccion[50];

}eAlumno;


void mostrarAlumno(eAlumno alumnoParametro);

eAlumno CargarAlumno();

void CargarListado(eAlumno [], int);

