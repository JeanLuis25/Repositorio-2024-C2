#include <stdio.h>

int main() {
    int var = 20;   // declaraci�n de una variable entera
    int *ptr;      // declaraci�n de un puntero a entero

    ptr = &var;    // el puntero recibe la direcci�n de la variable

    // Imprimir la direcci�n de la variable
    printf("La direcci�n de var es: %p\n", (void*)&var);

    // Imprimir la direcci�n almacenada en el puntero
    printf("El puntero ptr contiene: %p\n", (void*)ptr);

    // Imprimir el valor de la variable a trav�s del puntero
    printf("El valor de var a trav�s del puntero ptr es: %d\n", *ptr);

    return 0;
}
