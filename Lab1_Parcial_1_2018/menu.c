#include <stdio.h>
#include <stdlib.h>
#include "funcionValidar.h"

int menu(){

    char aux_resp[21];
    int resp;


    printf("\n\n(-MENU-)");
    printf("\n------[PROPIETARIO]-----------------------");
    printf("\n\n1. ALTA ");
    printf("\n2. MODIFICAR");
    printf("\n3. BAJA");
    printf("\n4. LISTAR\n");
    printf("\n------ [AUTOMOVIL]------------------------");
    printf("\n\n5. ALTA");
    printf("\n6. BAJA ");
    printf("\n7. LISTAR\n");
    printf("\n-------[INFORMES]-------------------------");
    printf("\n\n8. RECAUDACION TOTAL [DEL ESTACIONAMIENTO]");
    printf("\n9. RECAUDACION TOTAL [POR MARCA]");
    printf("\n10. AUTOS ESTACIONADOS [POR CADA PROPIETARIO]");
    printf("\n11. AUTOS DEL PROPIETARIO MARCA [AUDI]");
    printf("\n12. ORDENAR POR PATENTE\n");
    printf("\n---------[FIN]----------------------------\n");
    printf("\n12. SALIR\n");
    printf("\n-------------------------------------------");


    if(!getStringNumeros("\n\nINGRESE UNA OPCION: ",aux_resp)){

    }
    resp = atoi(aux_resp);
    system("cls");
    return resp;
}

void menu_precios(){

    printf("\n\t MARCA"); printf("\t\t\tPRECIO POR HORA\n");
    printf("\t---------------------------------------------------");
    printf("\n\t -ALPHA_ROMEO\t\t$150");
    printf("\n\t -FERRARI\t\t$175");
    printf("\n\t -AUDI\t\t\t$200");
    printf("\n\t -OTROS\t\t\t$250");
    printf("\n\t-----------------------------------------------\n");
}
