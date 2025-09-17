#include <stdio.h>
#include <stdlib.h>


void ejercicio1y2() {
    int a = 10;
    int *p = &a;
    int suma = *p *2;
    *p = suma; // No se coloca int, pues ya se definio antes
    printf("Ejercicio 1 y 2: a = %d, la suma de a con a es *p = %d\n", a, *p);  
}


void ejercicio3() {
    char arr[3] = {'a', 'b', 'c'};  //Si no se coloca nada en arr, usa el primer objeto del array
    char *p = arr;
    printf("Ejercicio 3: Primer elemento = %c\n", *p);  // %c para el caracter
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


struct Persona {
    char nombre [20];
    int edad;
};
// Primero se define la estructura con las variables
void ejercicio5() {
    struct Persona p1 = {"Ana", 30};
    struct Persona *ptr = &p1;
// Aqui luego se define el puntero a la estructura
// Luego al llamarlo para ser imprimido, solo se usar ptr -> y la variable de la structura a usar
    printf("Ejercicio 5: %s tiene %d años\n", ptr->nombre, ptr->edad);
}


void ejercicio6() {
    int m = 15;
    int *p = &m;
    int **pp = &p;
    printf("Ejercicio 6: x = %d, *p = %d, **pp = %d\n", m, *p, **pp);
}

//La funcion que luego sera llamado en el ejercicio
void incrementar(int *n) {
    (*n)++;
}
void ejercicio7() {
    int x = 10;
    incrementar(&x);
    printf("Ejemplo 7: x incrementado = %d\n", x);
}
// Al llamar la funcion, se realiza la operacion y modifica el valor


//Malloc permite guardar espacio en la memoria, definiendole el tamaño (char, int, double) y la cantidad de ellos
void ejercicio8() {
    int *p = (int*)malloc(sizeof(int) * 3); 
    if (p != NULL) {
        p[0] = 100; p[1] = 200; p[2] = 300;
        //Aqui se asignan los valores
        printf("Ejercicio 8: %d %d %d\n", p[0], p[1], p[2]);
        free(p);
    //free (p) "libera" o limpia la memoria que usan las variables
    }
}


// al definir los nombres, se aprovecha para definirlo como Puntero
// Luego para ser llamado por el bucle for que recorre el array e imprime cada nombre
void ejercicio9() {
    char *nombres[3] = {"Sofia", "Jose", "Judas"};
    printf("Ejercicio 9: ");
    for(int i = 0; i < 3; i++) {
        printf("%s ", nombres[i]);
    }
    printf("\n");
}

int suma(int a, int b) { return a + b; }
int resta(int a, int b) { return a - b; }
// Se definen las funciones
void ejercicio10() {
    //Aqui va el puntero a la funcion
    int (*operacion)(int, int);
    //Primero se llama la funcion a usar
    operacion = suma;
    //Luego se imprime el que se llamo, colocandole los valores a operar
    printf("Ejercicio 10: Suma = %d\n", operacion(10, 16));
    //Se puede usar el mismo puntero, siempre se define cual funcion es la que se usara
    operacion = resta;
    printf("Ejercicio 10: Resta = %d\n", operacion(51, 12));
}

int main() {
    ejercicio1y2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();
    ejercicio7();
    ejercicio8();
    ejercicio9();
    ejercicio10();
    return 0;
}