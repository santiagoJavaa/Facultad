#include <stdio.h>
#include <stdlib.h>

///Sumar y contar cuantos numeros fueron introducidos


int main()
{
   char seguir;

   int numero=1;
   int acumuladorPares=0, acumuladorImpares=0;
   int contadorPares=0, contadorImpares=0;
   int acumuladorPositivos=0, acumuladorNegativos=0;
   int contadorPositivos=0, contadorNegativos=0;
   int contadorCeros=0;
   int mayor, menor;
   int contadorPosicionMayor=0, contadorPosicionMenor=0;
   int flag=0;
   do{

    printf("\nIngrese un numero: " );
    scanf("%d", &numero);


    if(numero %2 ==0){

        acumuladorPares += numero;
        contadorPares++;

    }else{

        acumuladorImpares += numero;
        contadorImpares++;
    }

    if(numero >0){

        acumuladorPositivos += numero;
        contadorPositivos++;

    }else if(numero < 0){

        acumuladorNegativos += numero;
        contadorNegativos++;
    }else{

        contadorCeros++;
    }

    if(flag ==0 || numero > mayor){

        mayor = numero;
        contadorPosicionMayor++;

    }if(flag ==0 || numero < menor){

       menor = numero;
       contadorPosicionMenor++;
       flag=1;
    }



    printf("\nDesea ingresar otro num (s/n): ");
    fflush(stdin);
    scanf("%c", &seguir);

   }while(seguir == 's' || seguir == 'S');

   printf("\n\n\n\n\n");
   printf("\nLa suma de los numero pares: %d\n", acumuladorPares);
   printf("\nLa suma de los numeros negativos: %d\n", acumuladorImpares);
   printf("\nLa cantidad de num PARES ingresados son: %d\n", contadorPares);
   printf("\nLa cantidad de num IMPARES ingresados son: %d\n", contadorImpares);
   printf("\nLa suma de los numeros positivos es: %d\n", acumuladorPositivos);
   printf("\nLa suma de los numeros negativos es: %d\n", acumuladorNegativos);
   printf("\nLa cant de numeros positivos: %d\n", contadorPositivos);
   printf("\nLa cant de numeros negativos: %d\n", contadorNegativos);
   printf("\nLa cant de ceros es: %d", contadorCeros);
   printf("\nEl mayor de los numeros es: %d\n", mayor);
   printf("\nEl menor de los numeros es: %d\n", menor);
   printf("\nLa posicion del numero mayor es: %d\n", contadorPosicionMayor);
   printf("\nLa posicion del numero menor es: %d\n", contadorPosicionMenor);
   printf("\n\n\n");

    return 0;
}
