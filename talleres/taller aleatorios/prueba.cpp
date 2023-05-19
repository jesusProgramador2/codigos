#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generarAleatorio(int min, int max){
    return rand() % (max - min + 1) + min;
}

int main(){
    int min = 0, max = 100;
    int numeroBuscado, numeroPropuesto, intentos = 0;
    char respuesta;

    srand(time(NULL)); // Inicializar semilla aleatoria

    printf("Piensa en un numero entre %d y %d.\n", min, max);

    do {
        numeroPropuesto = generarAleatorio(min, max);
        printf("El numero propuesto es %d. ¿Es correcto? (+ para mayor, - para menor, cualquier otra tecla para igual): ", numeroPropuesto);
        scanf(" %c", &respuesta);

        if (respuesta == '+') 
        {
            min = numeroPropuesto + 1;
        } else if (respuesta == '-') 
        {
            max = numeroPropuesto - 1;
        } else 
        {
            break; // Si la respuesta no es ni + ni -, asumimos que el número ha sido encontrado
        }

        intentos++;

    } while (min <= max);

    if (min > max) {
        printf("No encontré el número en %d intentos.\n", intentos);
    } else {
        printf("Encontré el número en %d intentos.\n", intentos + 1);
    }

    return 0;
}
