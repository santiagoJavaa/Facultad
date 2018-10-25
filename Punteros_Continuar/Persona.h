
typedef struct{

   int id;
   char nombre[30];
   int edad;

}ePersona;

ePersona* nuevaPersona(); //Constructor por defecto

int cargarPersona(int, char*, int);

void MostrarPersona(ePersona *);

int get_ModificarEdad(ePersona* suEdad);


