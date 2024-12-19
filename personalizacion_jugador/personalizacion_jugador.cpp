#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>  // Para usleep

int main() {
    char nombreJugador[30];
    int eleccionUsuario, eleccionComputadora;
    char opciones[3][10] = {"Piedra", "Papel", "Tijera"};

    // Solicitar el nombre del jugador
    printf("Por favor, introduce tu nombre: ");
    scanf("%s", nombreJugador);
    
    // Mostrar el nombre ingresado
    printf("Bienvenido, %s, al juego de Piedra, Papel o Tijera!\n", nombreJugador);
    
    // Pausa de 2 segundos (2000000 microsegundos)
    usleep(2000000);

    // Solicitar la elección del usuario
    printf("Elige una opción:\n");
    printf("1. Piedra\n");
    printf("2. Papel\n");
    printf("3. Tijera\n");
    scanf("%d", &eleccionUsuario);
    
    // Generar la elección de la computadora
    srand(time(0)); // Inicializa el generador de números aleatorios
    eleccionComputadora = rand() % 3;

    // Mostrar las elecciones
    printf("Tu elección: %s\n", opciones[eleccionUsuario - 1]);
    printf("Elección de la computadora: %s\n", opciones[eleccionComputadora]);

    // Determinar el resultado
    if (eleccionUsuario == eleccionComputadora)
        printf("¡Empate!\n");
    else if ((eleccionUsuario == 1 && eleccionComputadora == 2) ||
             (eleccionUsuario == 2 && eleccionComputadora == 3) ||
             (eleccionUsuario == 3 && eleccionComputadora == 1))
        printf("¡Perdiste!\n");
    else
        printf("¡Ganaste!\n");

    // Pausa antes de finalizar
    printf("Presiona Enter para salir del Juego...");
    getchar();  // Espera a que el usuario presione Enter
    getchar();  // Necesario para captar el Enter si es presionado después de las elecciones

    return 0;
}
