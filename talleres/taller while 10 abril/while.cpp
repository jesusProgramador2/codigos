#include <stdio.h>

void funcion(int);
int leer();

int main()
{   
    //nada extraño 
    int numero_est;
    printf("programa que te dice cuantos estudiantes hacen n numero de ejercicios\n");
    printf("ingrese numero de estudiantes a procesar\n");
    scanf("%i",&numero_est);
    funcion(numero_est);
    return 0;
}


void funcion(int cont)
{
    int var, mod, i=0, ej1=0, ej2=0, ej3=0;
    //prueba de escritorio 
    printf("\t\t\t\t\t\tcont\tvar\tmod\tej1\tej2\tej3\n\n");
    while (i < cont)
    {
        printf("ingrese su ultimos 3 digitos de tu codigo\n");                
        var = leer();
        //un if para comprobar que estes metiendo un codigo de 3 digitos 
        if (var <= 999)
        {
            //saca el modulo de el codigo que metas 
            mod = var % 3 + 1;
            //y lo manda a un switch para sumar a la variable que corresponde para mostrarlo al final
            switch(mod)
            {            
            case 1: ej1++;
                break;
            case 2: ej2++;
                break;
            case 3: ej3++;
                break;   
            default:
                break;         
            }
        //el incremente que solo aumenta si pusiste un codigo correcto de otra forma lo repite 
        i++;      
        }
        //si no cumple te pondra un mensaje y podras volver a poner un codigo hasta que pongas uno correcto
        else
            printf("solo 3 digitos\n");
        //prueba de escritorio no la incluyo en el papel porque solo me ayuda a detectar errores rapidamente
        printf("\t\t\t\t\t\t%i\t%i\t%i\t%i\t%i\t%i\n",i,var,mod,ej1,ej2,ej3);
    }    
    printf("%i deben realizar el ejercicio 1\n%i deben realizar el ejercicio 2\n%i deben realizar el ejercicio 3",ej1,ej2,ej3);
}    
    
int leer()
{
    //es la funcion que lee porque dentro del bucle no dejaba 
    int var; 
    //%d. para que no lea un octal cuando se ingrese un codigo como 070 esto lo interpretaba como 56 con %d. se soluciono
    scanf("%d.",&var);    
    return var;
}