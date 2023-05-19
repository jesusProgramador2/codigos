#include<stdio.h>
#include<string.h>//para usar strlen que cuenta el numero de caracteres de una cadena


int main()
{
    //contador   //mayor inicia en 0 para que el primero que llegue a compararse sea mas grande lo mismo con menor pero
    //con la diferencia que inicia en un valor alto para que siempre sea menor
    //strmenor y mayor es para guardar donde se entontro la palabra mas corta y mas larga 
    int cont, i, mayor=0, menor=40, strmenor, strmayor;
    //una tabla con limites establecidos por el 
    char tabla[10][30];
    puts("programa que lee cadenas de caracteres y imprime la mayor y menor de la tabla rellenado");
    puts("ingrese cuantas cadenas de caracteres quiere poner");
    scanf("%i",&cont);
    for ( i = 0; i < cont; i++)// rellena el arreglo
    {
        puts("ingrese la cadena de caracteres");
        fflush(stdin);
        gets(tabla[i]);
    }
    for ( i = 0; i < cont; i++)
    {
        if (strlen(tabla[i]) > mayor)// compara con un len cual es el valor de la tabla para ver si es la palabra mas larga 
        // si es asi guarda esa direccion de en que fila encontro la palabra mas larga 
        {
            mayor = strlen(tabla[i]);
            strmayor = i;
        }
        //lo mismo pero viendo cual es la menor
        if (strlen(tabla[i]) < menor)
        {
            menor = strlen(tabla[i]);
            strmenor = i;
        }
        
    }
    //imprime usando de subindice donde encontraron los if las palabras mas cortas y mas largas
    printf("la cadena mas larga es: %s\nla cadena mas corta es: %s",tabla[strmayor],tabla[strmenor]);
    
    
    return 0;
}
