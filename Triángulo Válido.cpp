#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    // Solicitar al usuario que ingrese tres lados del un triángulo
    printf("Ingrese los tres lados del triángulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    // Determinar si los lados forman un triángulo válido
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        printf("Los lados %.2f, %.2f y %.2f forman un triángulo válido.\n", lado1, lado2, lado3);
    } else {
        printf("Los lados %.2f, %.2f y %.2f no forman un triángulo válido.\n", lado1, lado2, lado3);
    }

    return 0;
}