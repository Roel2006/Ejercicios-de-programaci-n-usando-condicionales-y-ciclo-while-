#include <stdio.h>

int main() {
    int numero;
    int suma = 0;
    int contador = 0;

    printf("Ingrese números (ingrese 0 para terminar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        suma += numero;
        contador++;

        printf("Ingrese otro número (ingrese 0 para terminar): ");
        scanf("%d", &numero);
    }

    if (contador == 0) {
        printf("No se ingresaron números.\n");
    } else {
        float promedio = (float) suma / contador;
        printf("El promedio de los números ingresados es: %.2f\n", promedio);
    }

    return 0;
}