#include <stdio.h>

int sumarDigitos(int n) {
    int suma = 0;

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        suma += n % 10;
        n = n / 10;
    }

    return suma;
}

int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    int resultado = sumarDigitos(numero);

    printf("La suma de los dígitos de %d es: %d\n", numero, resultado);

    return 0;
}
