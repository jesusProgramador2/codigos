#include"galletas.h"
#include<conio.h>
#include<ctype.h>

void inicio(char tabla[5][5], int pos[2]);

int main()
{
    FILE *p;
    char tecla, tabla[5][5];
    int pos[2], puntaje;
    p = fopen("log.txt","a+");
    
    
    inicio(tabla,pos);
    
    do
    {
        
        impcon(tabla);
        impx(tabla, p);
        tecla = getch();
    } while (puntaje == 5 || toascii(tecla) == 27 );
    
    
    
    
    
    
    printf("buenas");
    
    fclose(p);
    return 0;
}
void inicio(char tabla[5][5], int pos[2])
{
    rellenar(tabla);
    galleta(tabla);
    posicion(tabla, pos);
}