#include <stdio.h>
void ejemplo1() {
    int x = 5;
    int *p = &x;
    printf("Ejemplo 1: x = %d, *p = %d\n", x, *p);
}

int main() {
    ejemplo1();
    return 0;
}