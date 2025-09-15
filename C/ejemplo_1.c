#include <stdio.h>
void ejemplo1() {
    int x = 5;
    int *p = &x;
    printf("Ejemplo 1: x = %d, *p = %d\n", x, *p);
}

/*
&x extrae la posicion de memoria de la variable
*p  para indicarle a la variable que va a ser un puntero

*/

int main() {
    ejemplo1();
    return 0;
}