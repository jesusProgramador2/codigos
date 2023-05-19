#include<stdio.h>

void organizador(int [], int);

int primos(int);

int main()
{
    //var es una variable que me dice el numero del arreglo
    //i es una simple variable de control
    int var, i;
    printf("funcion que organiza un arreglo empezando con los numeros primos");
    printf("ingrese el tamaño del arreglo\n");
    scanf("%i",&var);
    int arreglo[var];
    printf("ingrese los valores del arreglo\n");
    //escritura del arreglo
    for ( i = 0; i < var; i++)
    {
        scanf("%i",&arreglo[i]);

    }
    organizador(arreglo,var);
    return 0;
}
//organiza los numeros primos primeros numeros normales despues
void organizador(int vector[], int cont)
{
    int i, j, comp, enviar, temp;
    //recorre el arreglo y manda cada numero del arreglo a la funcion primos para saber si es un numero primo
    for(i=1; i < cont; i++) //son dos bucles para que haga varias pasadas y no quede ninguno fuera de el ordenamiento
    {
        for(j=0; j < cont-i; j++)
        {
            if(primos(vector[j]) > primos(vector[j+1]))
            {
                temp=vector[j];//intercambia los valores
                vector[j]=vector[j+1];
                vector[j+1]=temp;
            }
        }
    }

puts("");
printf("el orden empezando por los primos es:\t ");
for ( i = 0; i < cont; i++)
{

    printf("%i\t",vector[i]);
}
}






//una funcion que si es un numero primo va a retornar 1 o 0 es un booleano basicamente
int primos(int num)
{
    int i,j, boolean;
    //el uno en muchas definiciones no es primo

    if(num==1)   // en esta linea se sale el primo
    {
        boolean = 1;
        return boolean;
    }
    else
    {
        i=2;          //i es el divisor
        while(num % i != 0) //mientras el número sea divisible por el divisor
        {
            i++;      //siguiente divisor
        }
        //cuando sale del while si el divisor es el propio número
        //entonces el número es primo
        if(i == num)
            {
                boolean = 0;
                return boolean;// es mi intento de hacer cosas con boleanos
            }
        else// si no pues no es primo y regresa uno para que sea mayor y en el organizador de arriba sea mayor y lo cambie si hace falta
        {
            boolean = 1;
            return boolean;
        }
    }
}
