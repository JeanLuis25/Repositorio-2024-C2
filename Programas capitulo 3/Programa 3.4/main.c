#include <stdio.h>
#include <math.h>

/*Suma de cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el
cuadrado de los mismos y la suma correspondientes a dichos cuadrados. */

void main (void)
{
    int NUM;
    long CUA,SUC = 0;
    printf ("\nIngrese un entero -0 para terminar-:\t");
    scanf ("%f",&NUM);
    while (NUM)
    /* Observa que la condicion es verdadera mientras el entero es diferente de cero. */
    {
        CUA = pow (NUM,2);
        printf ("%d al cubo es %1d",NUM,CUA);
        SUC= SUC + CUA;
        printf ("\mIngrese un numero entero -0 para terminar-:\t");
        scanf ("%d",&NUM);
    }
    printf ("\nLa suma de los cuadrados es %1d",SUC);

}
