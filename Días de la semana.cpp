#include <stdio.h>

int main() {
    int numero_dia;

    // Solicitar al usuario que ingrese un número del 1 al 7
    printf("Ingrese un número del 1 al 7: ");
    scanf("%d", &numero_dia);

    // Imprimir el día de la semana correspondiente
    if (numero_dia == 1) {
        printf("Lunes\n");
    } else if (numero_dia == 2) {
        printf("Martes\n");
    } else if (numero_dia == 3) {
        printf("Miércoles\n");
    } else if (numero_dia == 4) {
        printf("Jueves\n");
    } else if (numero_dia == 5) {
        printf("Viernes\n");
    } else if (numero_dia == 6) {
        printf("Sábado\n");
    } else if (numero_dia == 7) {
        printf("Domingo\n");
    } else {
        printf("Número inválido. Ingrese un número del 1 al 7.\n");
    }

    return 0;
}