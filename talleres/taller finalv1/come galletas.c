#include"galletas.h"
#include<conio.h>
#include<ctype.h>
#define ESC 27 //son los valores de sus ascii los puse en constantes porque son mas bonitos y legibles cuando lo quieres editar
#define ENTER 13
void inicio(char tabla[5][5], int pos[2]);

int main()
{
    FILE *p;
    char tecla, tabla[5][5];
    int pos[2], turnos;
    p = fopen("log.txt","a+");//en modo añadir y si no existe lo crea para registrar los turnos 
    
    
    inicio(tabla,pos);//inicia el juego llamando las funciones de inicializacion 
    turnos = 0;//inicia los turnos en 0 para contar cuantos turnos completaste el juego
    puts("juego de comegalletas presiona enter para jugar o esc para salir");
    do
    {
        
        impcon(tabla);
        impx(tabla, p); // funcion que imprime en consola la tabla que le pases
         //funcion que imprime en .txt la tabla que le pases 
        tabla[pos[0]][pos[1]] = '-';//pone un '-' donde estaba la G para que paresca que se mueve
        movimiento(tabla,pos); // funcion que genero una posicion adyancente aleatoria y la devuelve como arreglo
        tabla[pos[0]][pos[1]] = 'G'; // asigna la g a la nueva posicion generada por la funcion anterior   
        turnos++;//contador para saber cuanto te tardaste en completar el juego
        
        
        tecla = 's';// podria ser cualquier caracter con tal de que sea diferete a enter
        while (toascii(tecla) != ENTER)//este bucle se usa para que si es cualquier tecla que no sea enter el programa no haga nada
        {//si es enter leer se sale del bucle y si es esc hace la otra condicion
            fflush(stdin);
            tecla = getch();
            if (toascii(tecla) == ESC)
            {
                break; // si sale enter se sale de el bucle while y pasa a el do while donde comprueba si es esc y si es asi sale
            }
            
        }
        puts("presiona enter para siguiente movimiento o esc para salir del juego");
    }while(toascii(tecla) != ESC && contar(tabla) != 0); // revisa si la tecla es esc o ya no quedan galletas en el juego entonces se sale
    
    impcon(tabla);//vuelvo a imprimir la tabla porque en el bucle while es lo primero que se imprime asi que no sale el 
    //la tabla en el movimiento final si no se pone aqui la impresion
    impx(tabla, p);
    
    if(contar(tabla) == 0) //mira si el juego se acabo porque no quedaron galletas en el juego o si fue porque le diste esc
    {    
        printf("\nganaste en %i turnos\n",turnos);
    }
    puts("\njuego finalizado");
    fclose(p);
    system("pause");
    return 0;

}
void inicio(char tabla[5][5], int pos[2])//funcion que llama a funciones que inician el tablero las galletas y el comegalletas
{
    rellenar(tabla);
    galleta(tabla);
    posicion(tabla, pos);
}
