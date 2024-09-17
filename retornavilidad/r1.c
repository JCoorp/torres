#include <stdio.h>

void decimalABinario(int n) {
    if (n == 0) {
        return;
    }
    decimalABinario(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num = 428;

    if (num > 0) {
        printf("La representacion binaria de %d es: ", num);
        decimalABinario(num);
        printf("\n");
    } else {
        printf("El numero tiene que ser mayor que 0\n");
    }

    getchar(); // Pausar la consola hasta que el usuario presione una tecla
    return 0;
}
