#include <stdio.h>

int main() {
    int num, resto, contador_pares = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    int original = num;

    while (num > 0) {
            resto = num % 10;

            if(resto % 2 ==0) {
                contador_pares++;
              }
                num = num /10;
    }

    printf("\nEl numero %d tiene %d digitos pares\n", original,contador_pares);

    return 0;

    }
