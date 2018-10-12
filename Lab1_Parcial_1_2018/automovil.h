
typedef struct{

    int id_auto;
    char patente[21];
    char marca[41];
    int id_propietario;
    int estado;

}eAuto;

/**
 *@brief INICIALIZA LA ID Y EL ESTADO DE TODOS LOS AUTOS.
 *@param eAuto RECIBE EL VECTOR DE LA ESTRUCTURA AUTOS.
 *@param tamAuto RECIBE LA CANTIDAD DE POSICIONES QUE TENDRA EL VECTOR DE AUTOS.
 */
void inicializar_auto(eAuto automovil[], int tamAuto);

/**
 *@brief INGRESA DATOS CARGADOS AL VECTOR DE AUTOS.
 *@param eAuto RECIBE EL VECTOR DE LA ESTRUCTURA AUTOS.
 *@param tamAuto RECIBE LA CANTIDAD DE POSICIONES QUE TENDRA EL VECTOR DE AUTOS.
 */
void datos_hard_autos(eAuto automoviles[], int tamAuto);

/**
 *@brief MUESTRA UNA LISTA DE AUTOS.
 *@param eAuto RECIBE EL VECTOR DE LA ESTRUCTURA AUTOS.
 *@param tamAuto RECIBE LA CANTIDAD DE POSICIONES QUE TENDRA EL VECTOR DE AUTOS.
 */
void lista_autos(eAuto automoviles[], int tamAuto);

/**
 *@brief RECORRE TODO EL VECTOR Y RETORNA LA PRIMERA POSICION QUE TENGA EL ESTADO EN 0.
 *@param eAuto RECIBE EL VECTOR DE LA ESTRUCTURA AUTOS.
 *@param tamAuto RECIBE LA CANTIDAD DE POSICIONES QUE TENDRA EL VECTOR DE AUTOS.
 *@return LA POSICION LIBRE.
 */
int eAuto_buscarLugarLibre(eAuto automoviles[], int tamAuto);

/**
 *@brief RECORRE TODO EL VECTOR DE AUTOS Y BUSCA UNA LA PRIMERA POSICION OCUPADA Y AUMENTA EN 1 SU ID.
 *@param eAuto RECIBE EL VECTOR DE LA ESTRUCTURA AUTOS.
 *@param tamAuto RECIBE LA CANTIDAD DE POSICIONES QUE TENDRA EL VECTOR DE AUTOS.
 *@return LA ID INCREMENTADA +1.
 */
int eAuto_siguienteId(eAuto automoviles[], int tamAuto);

/**
 *@brief RECIBE UNA ID Y RECORRE TODO EL VECTOR Y BUSCA LA POSICION DE MEMORIA DONDE ESTE UBICADA ESA ID.
 *@param eAuto RECIBE EL VECTOR DE LA ESTRUCTURA AUTOS.
 *@param tamAuto RECIBE LA CANTIDAD DE POSICIONES QUE TENDRA EL VECTOR DE AUTOS.
 *@return LA POSICION DE MEMORIA DONDE ESTA UBICADA LA ID.
 */
int eAuto_buscarPorId(eAuto automoviles[], int tamAuto, int id);

/**
 *@brief RECIBE UNA ID Y RECORRE TODO EL VECTOR Y BUSCA LA POSICION DE MEMORIA DONDE ESTE UBICADA ESA ID.
 *@param eAuto RECIBE EL VECTOR DE LA ESTRUCTURA AUTOS.
 *@param tamAuto RECIBE LA CANTIDAD DE POSICIONES QUE TENDRA EL VECTOR DE AUTOS.
 *@return LA POSICION DE MEMORIA DONDE ESTA UBICADA LA ID.
 */
int eAuto_buscarPorIdProp(eAuto automovil[], int tamAuto, int id);

/**
 *@brief BUSCA UN LUGAR LIBRE, UN ID Y AGREGA DATOS AL VECTOR DE AUTOS.
 *@param eAuto RECIBE EL VECTOR DE LA ESTRUCTURA AUTOS.
 *@param tamAuto RECIBE LA CANTIDAD DE POSICIONES QUE TENDRA EL VECTOR DE AUTOS.
 *@param ePropietario RECIBE EL VECTOR DE LA ESTRUCTURA PROPIETARIO
 *@param tamProp RECIBE LA CANTIDAD DE POSICIONES QUE TENDRA EL VECTOR DE PROPIETARIO
 *@return 0 SI EL AUTOS ES DADO DE ALTA. SINO RETORNARA UN NUMERO NEGATIVO SEGUN EL ERROR QUE HAYA TENIDO.
 */
int alta_automovil(eAuto automovil[], int tamAuto, ePropietario propietario[], int tamProp);

void autoMostrar(eAuto automoviles);

/** \brief
 * \param  eAuto RECIBE EL VECTOR DE LA ESTRUCTURA AUTOS.
 * \param
 * \return
 */
void lista_autos(eAuto automoviles[], int tamAuto);

/**
 *  MUESTRA LA TABLA DEL LISTADO DE LAS CUATROS MARCAS
 */

void Listado_De_marcas();




