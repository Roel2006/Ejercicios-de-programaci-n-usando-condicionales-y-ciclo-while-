#include <stdio.h>

int main() {
    int numero, contador = 1, sumaPares = 0, sumaImpares = 0;

    printf("Ingresa un número: ");
    scanf("%d", &numero);

    while (contador <= numero) {
        if (contador % 2 == 0) {
            sumaPares += contador;
        } else {
            sumaImpares += contador;
        }
        contador++;
    }

    printf("La suma de los números pares hasta %d es: %d\n", numero, sumaPares);
    printf("La suma de los números impares hasta %d es: %d\n", numero, sumaImpares);

    return 0;
}