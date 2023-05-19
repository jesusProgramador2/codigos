#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int aleatorios(int, int);//genera numeros aleatorios primero del 0 al 100 y luego de lo que vaya ocurriendo

int main()
{
    
    int min = 0, max = 100; // 100 porque es del 0 al 100
    int i, cont, num;
    char rango;

    printf("programa que adivina un numero que piense el usuario\n");
    printf("piensa en un numero del 0 al 100\n\n");
    cont = 1;
    i = 1;
    do
    {
        num = aleatorios(min,max);
        printf("¿tu numero es este? %i\n",num);
        printf("si tu numero es menor presion '-' y si es mayor '+' si no es ninguno de los dos precione otra tecla\n");
        fflush(stdin);//esta cosa resulta ser muy importante para el codigo si no se pone todo explota 
        rango = getchar();//captura un caracter 
        
        switch (rango)
        {
        case '+':
            min = num + 1;            
            break;
        case '-':            
            max = num - 1;
            break;
        default:
            i = 2;
            break;
        }
        
        
        cont++;
    } while (i == 1);
    
    printf("el numero es %i y fue encontrado en %i de intentos",num,cont);
    return 0;
}


int aleatorios(int min, int max)
{
    srand(time(NULL));
    return rand() % (max - min + 1) + min; // esta funcion genera un numero aleatorio teniendo por variables de entrada el 
}                                            //el numero que genero el usuario y si era mayor o menor 
                                            //si era menor lo va a restar los numero por encima de ese numero 
                                            //y si es por encima hace lo mismo pero le suma el numero que ya viste osea que si de primeras salio
                                            //50 y el numero estaba por encima de eso el siguiete numero sera generado del 1 al 50 y se le sumara 50
                                            // asi si sale un 1 se el suma 50 y queda 51 y asi ira reduciendo numeros hasta que adivine
                                           // hay un posible error cuando el algoritmo sigue sin adivinar el numero da un error aritmetico que no se solucionar