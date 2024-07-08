#include <stdio.h>

int main() {
    int numeroSecreto = 42;
    int numeroAdivinado;
    int intentos = 0;

    printf("¡Bienvenido al juego de adivinar el número!\n");
    printf("Estoy pensando en un número entre 1 y 100.\n");

    while (1) {
        printf("Ingresa tu adivinanza: ");
        scanf("%d", &numeroAdivinado);
        intentos++;

        if (numeroAdivinado == numeroSecreto) {
            printf("¡Felicidades! Adivinaste el número en %d intentos.\n", intentos);
            break;
        } else if (numeroAdivinado < numeroSecreto) {
            printf("No, el número que estoy pensando es mayor.\n");
        } else {
            printf("No, el número que estoy pensando es menor.\n");
        }
    }

    return 0;
}