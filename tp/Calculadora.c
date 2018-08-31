#include <stdio.h>
#include "Calculadora.h"
void menu(){

  char seguir='s';
  int flag1=0, flag2=0;
  int opcion=0;
  float numero1, numero2;
  float resulSuma, resultResta, resultMult, resultDiv, resultFac;

  do{

    if(flag1==0)
    {
        printf("\n**************************************\n");
        printf("\tIngrese dos operandos.\n");
        printf("**************************************\n");
        printf("\nIngrese el primer operando: ");
        scanf("%f", &numero1);
        flag1=1;
    }
    if(flag2==0)
    {
        printf("\nIngrese el segundo operando: ");
        scanf("%f", &numero2);
        flag2=1;
        printf("\nCarga efectuada con exito!!\n\n");
        system("pause");
    }

    system("cls");
    printf("\n--------------Bienvenido--------------\n\n");
    printf("**************************************");
    printf("\nN1: %.2f", numero1);
    printf("\nN2: %.2f\n", numero2);
    printf("\n1. Sumar (N1 + N2).");
    printf("\n2. Restar (N1 - N2).");
    printf("\n3. Multiplicaion (N1 * N2).");
    printf("\n4. Dividir (N1 / N2).");
    printf("\n5. Factorial (N!).");
    printf("\n6. Calcular Todas las operaciones.\n");
    printf("**************************************\n");
    printf("7. Salir.\n");
    printf("**************************************\n");
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);


    switch(opcion){

      case 1:
             resulSuma = Sumar(numero1, numero2);
             printf("\nEl resultado de la suma es: %.2f\n", resulSuma);
             break;

      case 2:
             resultResta = Restar(numero1, numero2);
             printf("\nEl resultado de la resta es: %.2f\n", resultResta);
             break;

      case 3:
             resultMult = Multiplicar(numero1, numero2);
             printf("\nEl resultado de la multiplicacion es: %.2f\n", resultMult);
             break;

      case 4:

             resultDiv = Dividir(numero1, numero2);

             system("\npause\n");

             if(numero1 != 0 && numero2 !=0){

                printf("\nEl resultado de la division es: %.2f\n", resultDiv);

             }else{

                printf("\nERROR...No se puede dividir por ceros.\n");

             }
             system("\npause\n");
             break;

      case 5:
             resultFac = elfactorial(numero1);
             printf("\nEl resultado del factorial es: %.2f", resultFac);
             break;


      case 6:

             resulSuma = Sumar(numero1, numero2);
             printf("\nEl resultado de la suma es: %.2f\n", resulSuma);

             resultResta = Restar(numero1, numero2);
             printf("\nEl resultado de la resta es: %.2f\n", resultResta);

             resultMult = Multiplicar(numero1, numero2);
             printf("\nEl resultado de la multiplicacion es: %.2f\n",  resultMult);

             resultDiv = Dividir(numero1, numero2);

             if(numero1 != 0 && numero2 !=0){

                printf("\nEl resultado de la division es: %.2f\n",resultDiv);

             }else{

                printf("\nERROR...No se puede dividir por ceros.\n");

             }

             resultFac = elfactorial(numero1);
             printf("\nEl resultado del factorial es: %.2f", resultFac);

      case 7:
             seguir = 'n';
    }

       printf("\n\nDesea seguir? s/n: ");
             seguir=getche();
             seguir=tolower(seguir);
             printf("\n\n");
             system("pause");

  }while(seguir == 's' || seguir == 'S');


}
float Sumar(float n1, float n2){

   float suma;

   suma = n1 + n2;

   return suma;
}
float Restar(float n1, float n2){

  float resta;

  resta = n1 - n2;

  return resta;
}

float Multiplicar(float n1, float n2){

  float mult;

  mult = n1 * n2;

  return mult;
}
float Dividir(float n1, float n2){

  float div;

  div = (float)(n1 / n2);

  return div;

}

int elfactorial(int x)
{
int the_result;

    if(x==0)
        {
            return 1;
        }
    else
        {
        the_result = x * elfactorial(x-1);
        return the_result;
        }
}
