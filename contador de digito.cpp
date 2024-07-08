#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    while(numero != 0) {
        numero = numero / 10;
        contador++;
    }

    printf("El numero ingresado tiene %d digitos.\n", contador);

    return 0;
}
