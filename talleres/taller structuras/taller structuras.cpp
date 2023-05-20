#include<stdio.h>
#include<stdlib.h>

void nuevo(struct datos *);
struct datos
{
    char nombre[30];
    int salario;
};

int n = 2;

int main()
{
    FILE *parch;
    int i, temp, mayor=0, cont;  
    struct datos *pun;
    
    parch = fopen("sueldos.txt","r"); //
    fscanf(parch, "%*s %*s %*s %i", &cont); //lee el archivo y se salta las 3 cadenas de caracteres que hay al principio para
    //leer solo el numero de datos que hay en el txt 
    pun = (struct datos*) malloc(sizeof(struct datos));
    
    for ( i = 0; i < cont; i++)
    {
        fscanf(parch, "%s %i",&(pun+i)->nombre, &(pun+i)->salario);
        nuevo(pun);
        temp = (pun+i)->salario;
        
        if (temp > mayor)
        {
            mayor = (pun+i)->salario;    
        }
    }
    fclose(parch);
    for ( i = 0; i < cont; i++)
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