#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct datos
{
    char nombre[30];
    int salario;
};

void mostrar(struct datos *, int, int);
int leer(struct datos *, int, FILE*);

main()
{
    FILE *parch;
    int cont, mayor;  
    struct datos *pun;
    char pause;
    puts("programa que lee un archivo txt los nombre y los salario y te dice cual es el mayor");
    puts("el archivo txt debe tener el siguiente formato y debe ser guardado como sueldos.txt");
    puts("[numero de datos: (los datos que tenga el archivo)]\n[nombre salario]");
    puts("ejemplo\nnumero de datos: 2\nIsabella 2000\nMartin 4000");
    puts("presiona cualquier tecla para continuar");
    getch();

    parch = fopen("sueldos.txt","r"); //
    fscanf(parch, "%*s %*s %*s %i", &cont); //lee el archivo y se salta las 3 cadenas de caracteres que hay al principio para
    //leer solo el numero de datos que hay en el txt que toca specificar al principio del archivo
    pun = (struct datos*) malloc(cont * sizeof(struct datos));
    mayor = leer(pun, cont, parch);
    fclose(parch);
    mostrar(pun, cont, mayor);
    free(pun);
}



int leer(struct datos *pun, int cont, FILE *parch) //funcion que lee el archivo y regresa cual es el valor mayor del mismo
{
    int mayor=0, i, temp;
    for ( i = 0; i < cont; i++)
    {
        fscanf(parch, "%s %i",&(pun+i)->nombre, &(pun+i)->salario);
        temp = (pun+i)->salario;
        
        if (temp > mayor)
        {
            mayor = (pun+i)->salario;    
        }
    } 
    return mayor;
}


void mostrar(struct datos *pun, int cont, int mayor) //funcion que muestra lo guardado por leer() e imprime lo guardado en la structura
{
    int i;
    printf("numero de datos: %i\n",cont);
    for ( i = 0; i < cont; i++)
    {
        printf("%s %i\n",(pun+i)->nombre,(pun+i)->salario);
    }
    printf("el salario mayor es: %i\n",mayor);
}