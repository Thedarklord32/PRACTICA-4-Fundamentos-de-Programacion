#include <stdio.h>
int main () {
  long original, invertido, numero = 0;
  int digito;

  printf("ingrese un numero entero : ");
  scanf("%d", &numero);

  original = numero;

  while(numero > 0) {
  digito = numero % 10;
  invertido = invertido * 10 + digito;
  numero = numero / 10;

}

if(original == invertido)
    printf("el numero %d es capicula.\n", original);
else
    printf("el numero %d no es capicula.\n", original);

    return 0;
}
