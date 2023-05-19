#include<stdio.h>
#include<stdlib.h>

void impresion(char *,int);
struct sueldos
{
    int sueldo;
    char nombre[30];
};


int main()
{
    FILE *parchivo;
    int i, cont;
    parchivo = fopen("sueldos.txt","r");
    for ( i = 0; i < cont; i++)
    {
        
    }
    
    
    fclose(parchivo);
    
    return 0;
}


void impresion(char *leer, int temp)
{


}