#include <stdio.h>

// Función recursiva para calcular el factorial
unsigned long long int factorial(unsigned long long int n, unsigned long long int i, unsigned long long int result) {
    // Caso base: detener la recursión cuando i supera a n
    if (i > n) {
        return result;
    }
    // Llamada recursiva, aumentando i y multiplicando el resultado
    return factorial(n, i + 1, result * i);
}

int main() {
    unsigned long long int num;
    int valid_input = 0;  // Variable para comprobar si la entrada es válida

    // Solicitar el número al usuario con comprobación
    while (!valid_input) {
        printf("Introduce un número positivo del que quieres calcular el factorial: ");
        if (scanf("%llu", &num) != 1) {
            printf("Entrada no válida. Por favor, introduce un número entero positivo.\n");
            while (getchar() != '\n');  // Limpiar el buffer de entrada
        } else if (num < 0) {
            printf("El número no puede ser negativo. Inténtalo de nuevo.\n");
        } else {
            valid_input = 1;  // La entrada es válida
        }
    }

    // Llamar a la función factorial recursiva con i=1 y result=1
    unsigned long long int resultado = factorial(num, 1, 1);

    // Mostrar el resultado del factorial
    printf("El factorial de %llu es: %llu\n", num, resultado);

    return 0;
}
