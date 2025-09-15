#include <stdio.h>

void ejercicio1y2() {
    int a = 10;
    int *p = &a;
    int suma = *p *2;
    *p = suma; // No se coloca int, pues ya se definio antes
    printf("Ejemplo 1: a = %d, *p = %d\n", a, *p);  
}

void ejercicio3() {
    char arr[3] = {'a', 'b', 'c'};  //
    char *p = arr;
    printf("Ejemplo 3: Primer elemento = %c\n", *p);  // %c para el caracter
}

void ejercicio4(){
    char arr[5] = {'S', 'o', 'f', 'i', 'a'};  //
    char *p = arr;
    printf("Ejemplo 4: Array: ");
    for(int i = 0; i < 5; i++) {
        printf("%c ", *(p + i));
    }
    printf("\n");
}

int main() {
    ejercicio1y2();
    ejercicio3();
    ejercicio4();
    return 0;
}