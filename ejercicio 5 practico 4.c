#include <stdio.h>
int main () {
    int N;
    int digito, complemento;
    int resultado = 0, factor = 1;

    printf("Ingrese un numero entero: ");
    scanf("%d", &N);

    do {
            digito = N % 10;
            complemento = 9 - digito;
            resultado = complemento* factor + resultado;
            factor *= 10;
            N /= 10;
        } while (N > 0);

        printf("El complemento a 9 es: %d\n", resultado);
        return 0;
       }
