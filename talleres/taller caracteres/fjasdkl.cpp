#include<stdio.h>

void organizartabla(char palabra[30]);//prototipo de la funcion

int main()
{
    int i,n,uwu;
    char palabra[30],tabla[n][30];
    
    
    
    puts("programa que organiza una tabla de forma inversa\n\n");
    puts("ingrese la cantidad de filas que desea en su tabla\n");
    scanf("%i",&n);
    
    for( i=0;i<n;i++)
    {
	//filas 
	
        puts("ingrese frase para su tabla:");
        fflush(stdin);
        gets(tabla[i]);
        
    }
        
    uwu = 3;
    for( i=0;i<n;i++)
    {
        
        printf("%s\n",tabla[uwu]);
    }   
    
    return 0;
}