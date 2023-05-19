#include<stdio.h>
void sorting(int[],int a);

int main()
{
    int a;
    
    puts("programa que organiza datos");
    puts("inserta numero de datos");
    scanf("%i",&a);
    int sort[a];
    puts("ingrese los datos del arreglo");
    for (int i = 0; i < a; i++)
    {
        printf("dato %i\n",(i+1));
        scanf("%i",&sort[i]);
    }
    
    sorting(sort,a);
    
    return 0;
}

void sorting(int vector[], int cont)
{
    int temp,j,i;

    for (i = 0; i < cont - 1; i++) {
        for (j = 0; j < cont - i - 1; j++) 
        {
            if (vector[j] > vector[j + 1]) 
            {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
    for ( i = 0; i < cont; i++)
    {
        printf("%i\t",vector[i]);
    }
    
    
}   
        
