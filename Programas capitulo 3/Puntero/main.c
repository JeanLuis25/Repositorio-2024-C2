#include <stdio.h>

int main() {
    int var = 20;   // declaración de una variable entera
    int *ptr;      // declaración de un puntero a entero

    ptr = &var;    // el puntero recibe la dirección de la variable

    // Imprimir la dirección de la variable
    printf("La dirección de var es: %p\n", (void*)&var);

    // Imprimir la dirección almacenada en el puntero
    printf("El puntero ptr contiene: %p\n", (void*)ptr);

    // Imprimir el valor de la variable a través del puntero
    printf("El valor de var a través del puntero ptr es: %d\n", *ptr);

    return 0;
}
