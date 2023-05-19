#include<stdio.h>

void funcion(int [3][4], int, int);


int main()
{
    
    int arreglo[3][4], i, j ,datos,mult1,mult2;
    printf("programa que te dice la cantidad de multiplos de un numero especifico\n"); 
    printf("que ingrese el usuario de una matriz 3x4\n");
    
    puts("ingrese los valores de la matriz");
    for ( i = 0; i < 3; i++)
        for ( j = 0; j < 4; j++)
        {
            printf("ingrese casilla (%i,%i):\n",i,j);
            scanf("%i",&arreglo[i][j]);
        }
    puts("ingrese dos numeros para saber cuantos multiplos de esos numeros hay en la matriz");
    puts("ingresa primer numero");
    
    scanf("%i",&mult1);
    puts("ingrese segundo valor");
    scanf("%i",&mult2);
    funcion(arreglo,mult1,mult2);    
    
    return 0;
}

void funcion(int arreglo[3][4], int mult1, int mult2)
{
    int i,j,nota1=0,nota2=0;
    puts("la matriz es:");
    for ( i = 0; i < 3; i++)
        {
            puts("");
            
            for ( j = 0; j < 4; j++)
            {
                printf("%i\t",arreglo[i][j]);
            if (arreglo[i][j]%mult1 == 0)
            {
                //es multiplo de el primer numero lo anoto en una variable
                nota1 += 1;
            }
            
            if (arreglo[i][j]%mult2 == 0)
                {
                        //es multiplo del segundo numero
                    nota2 += 1;
                }
            }
        }
    //el cero es multiplo de todos los numeros nieguemelo 
    printf("la cantidad de multiplos de %i es de: %i\t y de %i es de:\t%i",mult1,nota1,mult2,nota2);
}


