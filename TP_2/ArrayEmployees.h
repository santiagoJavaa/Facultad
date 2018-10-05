
#define TAM_Empeleados 1000

#define OCUPADO 1
#define VACIO 0
#define ELIMINADO 0

typedef struct{

  int id;
  char nombre[51];
  char apellido[51];
  int sector;
  float salario;
  int estado;
               // 0 VACIO PARA GUARDAR
              // 1 ESTA OCUPADO
}eEmpleado;


int inicializarEstado(eEmpleado arrayEmpleados[], int tamanio);
int buscarLibre(eEmpleado arrayEmpleados[], int tamanio);
int buscarPorId(eEmpleado arrayEmpleados[], int tamanio, int id);

int AltaEmpleados(eEmpleado arrayEmpleados[]);
void AltaEmpleados_Harcodeados(eEmpleado arrayEmpleados[]);
void listarEmpleados(eEmpleado arrayEmpleados[], int tamanio);
int bajaEmpleados(eEmpleado arrayEmpleados[], int tamanio);
int modificarEmpleados(eEmpleado arrayEmpleados[], int tamanio);
