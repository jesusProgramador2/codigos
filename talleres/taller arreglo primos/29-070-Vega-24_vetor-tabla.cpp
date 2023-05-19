#include<stdio.h>

void taller1(); //funcion del taller uno    
void taller2(); //funcion del taller dos
void multiplos(int [3][4], int, int); // funcion que hace el trabajo del taller 1 
void organizador(int [], int); //organiza en el taller 2 
int primos(int); // determina si es un numero primo en el taller 2

int main()
{
    int select, control=0;// dos variables de control? no recuerdo como se llamaba la del switch
    printf("selector de programas de los talleres\n");
    printf("1. taller arreglos bidimensional\n2. taller arreglo que organiza numeros primos\n");
    
    while (control == 0)// para que si te equivocas de numero vuelvas a meterlo y intentes de nuevo   
    {
        scanf("%i",&select);
        switch (select)//selector de programas
            {
            case 1:
                taller1();
                control++; // sales del bucle while
                break;
            case 2:
                taller2();
                control++;
                break;
            default:
                printf("ingreso un numero no valido vuelva a intentarlo");
                break;
            }
    }
    printf("\ngracias por usar el programa adios");
    
    
    
    
    return 0;
}
void taller1()
{
    int arreglo[3][4], i, j, mult1 ,mult2; //declara el arreglo i y j son variables de control y subindices del arreglo
    //datos, mult1 y mult2 son variables de entrada datos es para rellenar el arreglo y 
    //las otras dos son los multiplos que quires buscar dentro del arreglo 
    printf("programa que te dice la cantidad de multiplos de un numero especifico\n"); 
    printf("que ingrese el usuario de una matriz 3x4\n");
    
    puts("ingrese los valores de la matriz");
    for ( i = 0; i < 3; i++)// lectura del arreglo
        for ( j = 0; j < 4; j++)
        {
            printf("ingrese casilla (%i,%i):\n",i,j);
            scanf("%i",&arreglo[i][j]);
        }
    puts("ingrese dos numeros para saber cuantos multiplos de esos numeros hay en la matriz");
    puts("ingresa primer numero");
    
    scanf("%i",&mult1); //lectura de los multiplos que va a buscar
    puts("ingrese segundo valor");
    scanf("%i",&mult2);
    multiplos(arreglo,mult1,mult2);    
    
    
}
void multiplos(int arreglo[3][4], int mult1, int mult2)// funcion que busca los multiplos dentro del arreglo
{
    int i,j,nota1=0,nota2=0;
    puts("la matriz es:");
    for ( i = 0; i < 3; i++)
        {
            puts("");
            
            for ( j = 0; j < 4; j++)
            {
                printf("%i\t",arreglo[i][j]);
            if (arreglo[i][j] % mult1 == 0)
            {
                //es multiplo de el primer numero lo anoto en una variable
                nota1 += 1;
            }
            
            if (arreglo[i][j] % mult2 == 0)
                {
                        //es multiplo del segundo numero
                    nota2 += 1;
                }
            }
        }
    //el cero es multiplo de todos los numeros nieguemelo 
    printf("la cantidad de multiplos de %i es de: %i\t y de %i es de:\t%i",mult1,nota1,mult2,nota2);
}

void taller2() // es el segundo taller de organizar primos
{
    //var es una variable que me dice el numero del arreglo
    //i es una simple variable de control
    int var, i;// i es una variable de control y el subindice del arreglo. var es para leer le tamaño del arreglo
    printf("funcion que organiza un arreglo empezando con los numeros primos");
    printf(" ingrese el tamaño del arreglo\n");
    scanf("%i",&var);
    int arreglo[var];
    printf("ingrese los valores del arreglo\n");
    //escritura del arreglo
    for ( i = 0; i < var; i++)
    {
        scanf("%i",&arreglo[i]);

    }
    organizador(arreglo,var);//
}
void organizador(int vector[], int cont)//funcion que por bubble sort organiza los primos 
{
    int i, j, temp;//variables de control i y j temp es para intercambiar los valores
    //el bubble sort
    for(i=1; i < cont; i++) 
    {
        for(j=0; j < cont-1; j++) // es menos 1 para que no compare con una casiila que no existe en el arreglo
        {
            if(primos(vector[j]) > primos(vector[j+1]))
            {
                temp=vector[j];//intercambia los valores
                vector[j] = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
    puts("");
    printf("el orden empezando por los primos es:\t ");
    for (i = 0; i < cont; i++)
    {

        printf("%i\t",vector[i]); // muestra el resultado del ordenamiento
    }
}
//una funcion que si es un numero primo va a retornar 1 o 0 es un booleano basicamente esto para que en el bubble sort como 0 es menor que  1 los organice
int primos(int num)
{
    int divisor, boolean;
    //el uno en muchas definiciones no es primo
    //asi que lo descartamos 
    if(num == 1)  
    {    
        boolean = 1;
        return boolean;
    }
    else
    {
        divisor = 2;  //comienza en 2 porque es el primer primo por revisar
        while(num % divisor != 0) //mientras el número sea divisible por el divisor
        {
            divisor++;// suma uno al divisor para seguir buscando primos
        }
        //una vez romper el bucle while revisa si es el mismo el divisor
        //si lo es retorna 0 porque sera primo
        if(divisor == num)
            {
                boolean = 0;
                return boolean;//
            }
        else//si no es el mismo el divisor no es primo y regresara 0
        {
            boolean = 1;
            return boolean;
        }
    }
}
//me siento orgulloso de este programa porque selecciona dos programas y todo parece funcionar ahora el problema se hacerlo en papeeel :'(
// y use muchas herramientas para hacerlo y es un orgullo el ver que se puede y se esta aprendiendo
//seguramente haya formas mucho mas eficientes de hacer todo pero este es mi hijo y yo lo quiero y partirme la cabeza para que todo funcione fue divertido :) sigo sin querer hacerlo en papel