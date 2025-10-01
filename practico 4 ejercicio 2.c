#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, resto, invertido = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    int original = num;

    num = abs(num);

    while (num > 0) {
            resto = num % 10;
            invertido = invertido *10 + resto;
            num = num / 10;
    }

    printf("La numero original %d invertido: %d\n", original,invertido);

    return 0;
}
