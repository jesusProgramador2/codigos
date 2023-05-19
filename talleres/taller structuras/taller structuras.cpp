#include<stdio.h>
#include<stdlib.h>

void nuevo(struct datos *);

struct datos
{
    char nombre[30];
    int salario;
    
}*pun;

int n = 1;

int main()
{
    FILE *parch;
    int i, temp, mayor=0, n;  
    pun = (struct datos*) malloc(sizeof(struct datos));
    parch = fopen("sueldos.txt","r"); //
    
    
    for ( i = 0; i < 10; i++)
    {
        fscanf(parch, "%s %i",&(pun+i)->nombre, &(pun+i)->salario);
        temp = (pun+i)->salario;
        
        if (temp > mayor)
        {
            
            mayor = (pun+i)->salario;    
        }
        
    }
    fclose(parch);
    for ( i = 0; i < 10; i++)
    {
        printf("lei esto %s %i\n",(pun+i)->nombre,(pun+i)->salario);
        
    }
    printf("el valor mayor es:%i\n",mayor);
    return 0;
}


void nuevo(struct datos *p)
{
    n++;
    p = (struct datos *) realloc(p, sizeof(struct datos) * n);
}