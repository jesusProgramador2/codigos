#include"galletas.h"
#include<conio.h>
#include<ctype.h>

void inicio(char tabla[5][5], int pos[2]);

int main()
{
    FILE *p;
    char tecla, tabla[5][5];
    int pos[2], turnos, puntaje;
    p = fopen("log.txt","a+");//en modo añadir y si no existe lo crea para registrar los turnos 
    
    
    inicio(tabla,pos);
    turnos = 0;
    
    do
    {
        
        impcon(tabla);
        impx(tabla, p); // funcion que imprime en consola la tabla que le pases
         //funcion que imprime en .txt la tabla que le pases 
        tabla[pos[0]][pos[1]] = '-';//pone un '-' donde estaba la G para que paresca que se mueve
        movimiento(tabla,pos); // funcion que genero una posicion adyancente aleatoria y la devuelve como arreglo
        tabla[pos[0]][pos[1]] = 'G'; // asigna la g a la nueva posicion generada por la funcion anterior   
        turnos++;//contador para saber cuanto te tardaste en completar el juego
        puntaje = contar(tabla);
        
        tecla = getch();
    }while(tecla == 'e' && puntaje != 0);
    impcon(tabla);
    impx(tabla, p);
    //printf("%i",turnos);
    
    fclose(p);
    return 0;
}
void inicio(char tabla[5][5], int pos[2])//funcion que llama a funciones que inician el tablero las galletas y el comegalletas
{
    rellenar(tabla);
    galleta(tabla);
    posicion(tabla, pos);
}
