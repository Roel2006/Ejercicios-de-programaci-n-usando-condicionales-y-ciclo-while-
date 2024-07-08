#include <stdio.h>

int main() {
    int puntaje;

    // Solicitar al usuario que ingrese un puntaje
    printf("Ingrese un puntaje del (0-100): ");
    scanf("%d", &puntaje);

    // Determinar la calificación en letra
    if (puntaje >= 90) {
        printf("Calificación: A\n");
    } else if (puntaje >= 80) {
        printf("Calificación: B\n");
    } else if (puntaje >= 70) {
        printf("Calificación: C\n");
    } else if (puntaje >= 60) {
        printf("Calificación: D\n");
    } else {
        printf("Calificación: F\n");
    }

    return 0;
}