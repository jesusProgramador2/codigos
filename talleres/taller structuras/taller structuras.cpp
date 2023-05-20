#include<stdio.h>
#include<stdlib.h>


struct datos
{
    char nombre[30];
    int salario;
};



int main()
{
    FILE *parch;
    int i, temp, mayor=0, cont;  
    struct datos *pun;
    
    parch = fopen("sueldos.txt","r"); //
    fscanf(parch, "%*s %*s %*s %i", &cont); //lee el archivo y se salta las 3 cadenas de caracteres que hay al principio para
    //leer solo el numero de datos que hay en el txt 
    pun = (struct datos*) malloc(cont * sizeof(struct datos));
    
    for ( i = 0; i < cont; i++)
    {
        fscanf(parch, "%s %i",&(pun+i)->nombre, &(pun+i)->salario);
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


