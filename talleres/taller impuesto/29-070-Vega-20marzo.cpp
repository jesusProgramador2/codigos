
#include<stdio.h>
#include<math.h>


// nombre: Vega Alejandro
// codigo 070
// GR-29

//prototipo de funcion que calcula el impuesto 
int impuesto(int,int);

//solo decoracion y lectura de variables
int main()
{
    //leo el smmv para que sirva para otro momento en donde el smmv sea diferente
    //y pues el ingreso para calcular el impuesto
    int ingreso, smmv;
    printf("Programa que calcula el impuesto de un valor a tranferir al exterior teniendo el smmv de cualquier año\n");
    printf("ingrese el valor de smmv actual\n");
    scanf("%i",&smmv);
    printf("ingrese el valor de su monto a tranferir\n");
    scanf("%i",&ingreso);               //llamado de mi funcion ;]
    printf("debes pagar %i de impuesto",impuesto(ingreso,smmv));
    return 0;
}

//vamos a calcular el impuesto para ello primero vamos a ver si es mas o menos de un smmv para sobre eso 
//cobrar el impuesto
int impuesto(int impuesto, int smmv)
{
    //variable auxiliar para guardar datos
    int aux;
    if ((impuesto - smmv) >= 0)   
    {
        // cuando el valor es igual a un smmv cobra el impuesto de 0.3% sobre el smmv
        if (impuesto == smmv)
        {
            impuesto = impuesto * 0.3;            
        }
        else// aqui cobra el extra del smmv por la tasa 0.3%
        {                
            //aqui estoy calculando el que se pasa del smmv para aplicarle el 0.3%
            aux = impuesto - smmv;
            aux = aux * 0.3;
            //aqui como ya calcule el impuesto del que se pasa del smmv ejemplos 
            //si es 2 el smmv y el ingreso es 3 tengo que sumar el 1*0.3 + 2*0.3 para obtener mi impuesto a pagar            
            
            impuesto = smmv * 0.3;
            impuesto = impuesto + aux;
            if (impuesto > 2*smmv )//el impuesto no puede exeder 2 smmv si es asi cobrar 2 smmv
            {
                impuesto = 2*smmv;
            }
            
        }
    }
    else//si es por debajo de smmv cobrara 0.2%
        impuesto = impuesto * 0.2;
    return impuesto;
}
