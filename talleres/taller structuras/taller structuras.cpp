#include<stdio.h>
#include<stdlib.h>



struct datos
{
    char nombre[30];
    int salario;
    
}*pun;

int main()
{
    FILE *parch;
    int i, temp, mayor=0, n;  
    pun = (struct datos*) malloc(n * sizeof(struct datos));
    parch = fopen("archivo.txt","r"); //
    while (temp != 0)
    {
        fscanf(parch, "%i", &temp);
        puts("i");
    }
    
    
    for ( i = 0; i < 9; i++)
    {
        fscanf(parch, "%s %i",&(pun+i)->nombre, &(pun+i)->salario);
        temp = (pun+i)->salario;
        
        if (temp > mayor)
        {
            
            mayor = (pun+i)->salario;    
        }
        
    }
    fclose(parch);
    for ( i = 0; i < 9; i++)
    {
        printf("lei esto %s %i\n",(pun+i)->nombre,(pun+i)->salario);
        
    }
    printf("el valor mayor es:%i\n",mayor);
    return 0;
}