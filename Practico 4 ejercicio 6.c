#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero, digito;
    bool esValido = true;

    printf("Ingrese un numero en base 8: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    int temp = numero;
    while (temp > 0) {
        digito = temp % 10;

        if (digito >= 8) {
            esValido = false;
            printf("¡Error! El dígito %d no es valido para base 8\n", digito);
            break;
        }

        temp = temp / 10;
    }

    if (esValido) {
        printf("El número %d es valido en base 8 (todos los dígitos entre 0-7)\n", numero);
    } else {
        printf("El número %d NO es valido en base 8\n", numero);
    }

    return 0;
}
