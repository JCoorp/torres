#include <stdio.h>

// Función recursiva con memoización usando long long int
long long int fibonacci(int n, long long int memo[]) {
    if (memo[n] != -1) {
        return memo[n];
    }
    
    if (n == 0) {
        memo[n] = 0;
    } else if (n == 1) {
        memo[n] = 1;
    } else {
        memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    }
    
    return memo[n];
}

int main() {
    int num;
    
    // Pedir al usuario que introduzca un número
    printf("Introduce un número para calcular la serie Fibonacci: ");
    
    // Leer la entrada del usuario
    scanf("%d", &num);
    
    // Validar si el número es negativo
    if (num < 0) {
        printf("Por favor, introduce un número positivo.\n");
        return 1;
    }

    // Inicializar el arreglo para memoización con -1
    long long int memo[num + 1];
    for (int i = 0; i <= num; i++) {
        memo[i] = -1;
    }
    
    // Calcular e imprimir el valor de Fibonacci
    printf("La serie Fibonacci en la posición %d es: %lld\n", num, fibonacci(num, memo));
    
    return 0;
}
