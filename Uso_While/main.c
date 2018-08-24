#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cont, numero, Contnegativos =0, Contpositivos =0, contadorPositivos =0, contadorNegativos =0;
    int contadorCero =0, contadorPares =0, contadorImpares =0;
    float promedioPositivos, promedioNegativos;
    int flag =0, maximo, minimo;
    char repuesta;


    do{

     printf("\nIngrese un numero: ");
     scanf("%d", &numero);

      if( numero > 0) {

        Contpositivos +=numero;
        contadorPositivos ++;

        }else if(numero < 0){

           Contnegativos += numero;
           contadorNegativos ++;
        }
        else{

            contadorCero++;
    }

        if(numero % 2==0){


            contadorPares++;

        }else{

            contadorImpares++;
        }

       if(flag == 0 || numero>maximo){

            maximo = numero;

       }if(flag == 0 || numero < minimo){

            minimo = numero;
            flag = 1;
       }



     printf("\nDesea ingresar otro numero s/n:  ");
     fflush(stdin);
     scanf("%c", &repuesta);

    }while(repuesta == 's' || repuesta == 'S');

    promedioPositivos = (float)contadorPositivos / Contpositivos ;

    printf("\nLa suma de la cantidad de numeros positivos son: %d\n", Contpositivos);
    printf("\nLa suma de la cantidad de numeros negativos son: %d\n", Contnegativos);
    printf("\nLa cantidad de numeros positivos es: %d\n", contadorPositivos);
    printf("\nLa cantidad de numeros negativoses: %d\n", contadorNegativos);
    printf("\nLa cantidad de ceros es: %d\n", contadorCero);
    printf("\nLa cantidad de numeros pares es: %d\n", contadorPares);
    printf("\nLa cantidad de numeros impares es: %d\n", contadorImpares);
    printf("\nEl promedio de los numeros positivos es: %.2\n", promedioPositivos);
    printf("\nEl numero maximo es: %d\n", maximo);
    printf("\nEl numero minimo es: %d\n", minimo);

    return 0;
}
