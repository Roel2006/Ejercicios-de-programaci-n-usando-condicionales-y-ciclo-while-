#include <stdio.h>

int main() {
    int año;

    // Solicitar al usuario que ingrese un año
    printf("Ingrese un año: ");
    scanf("%d", &año);

    // Determinar si el año es bisiesto
    if (año % 4 == 0) {
        if (año % 100 == 0) {
            if (año % 400 == 0) {
                printf("%d es un año bisiesto.\n", año);
            } else {
                printf("%d no es un año bisiesto.\n", año);
            }
        } else {
            printf("%d es un año bisiesto.\n", año);
        }
    } else {
        printf("%d no es un año bisiesto.\n", año);
    }

    return 0;
}