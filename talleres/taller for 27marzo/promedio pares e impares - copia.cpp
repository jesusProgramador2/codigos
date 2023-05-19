#include<stdio.h>
// nombre: Vega Alejandro
// codigo 070
// GR-29

//prototipo funcion de promedios

void promedios(int);


int main()
{
    int numero_datos;
    printf("Programa que calcula el promedio de los datos "); 
    printf("que ingrese el usuario y hace un promedio con los pares y tambien con los impares\n");
    printf("ingrese el numero de datos a promediar\n");
    scanf("%i",&numero_datos);
    //llamado de la funcion y pedir los datos para saber cuantos datos promediar 
    promedios(numero_datos);
    return 0;
}

void promedios(int cont)
{
    //el total es un acumulador y las var2 y var3 son los que dividen para sacar el promedio 
    float total_par, total_impar, var2, var3;
    //var es que guarda los datos que mete el usuario para sumarla al acomulador
    //cont1 y cont2 son acomuladores que me dicen sobre que dividir si meten 2 datos impares pues dividira entre 2
    //y si mete 2 impares entre dos pero si mete 2 datos pares y 3 impares el par va a ser entre dos y el impar entre 3 
    //asi los promedios son entre los datos pares que metas y los impares no es mezclan :)
    int var, cont1 = 0, cont2 = 0;
    //prueba de escritorio
    printf("\t\t\t\t\tcont\tsuma pares\tsuma impares\tprom\tprompar\tcont1\tcont2\n");
    for (int i = 0; i < cont; i++)
    {
        printf("\ningrese valor para el promedio\n");
        scanf("%i",&var);
        //comprueba si es un numero par como ya lo hemos hecho muchas veces
        if (var % 2 == 0)
        {
            total_par += var;
            cont1++;
            var2 = total_par/cont1;
            
        }
        //recuerda profe que en una clase te dije que habia un else if que era para cuando 
        //quieres comprobar entre varias condiciones pero una ves encuentra una deja de comprobar las otras?
        //pues aqui esta la encontre 
        else if (var % 2 != 0)
        {
            total_impar += var;
            cont2++;
            var3 = total_impar/cont2;
            
        }
        //prueba de escritorio
        printf("\t\t\t\t\t%i\t%.2f\t\t%.2f\t\t%.2f\t%.2f\t%i\t%i\n",i,total_par,total_impar,var2,var,cont1,cont2);
    }
    //el resultado final 
    printf("el promedio de los pares es: %.2f y el de los impares es: %.2f",var2,var3);
}
