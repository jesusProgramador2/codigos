#include<stdio.h>
// Alejandro Vega
//cod 070
//GR 29

void sucesion();


int main()
{
    printf("programa que imprime una sucesion usando un for\n");
    printf("la sucesion es:  ");
    sucesion();
    return 0;
}

// no tengo mucho que explicar es un bucle que recorre un switch 9 veces 
void sucesion()
{
for (int i = 0; i <= 8; i++)
{
  switch (i)
  {
  case 0: printf("2\t");    
    break;
  case 1: printf("2\t");
    break;
  case 2: printf("3\t");
    break;
  case 3: printf("8\t");
    break;
  case 4: printf("35\t");
    break;
  case 5: printf("204\t");
    break;
  case 6: printf("1421\t");
    break;
  case 7: printf("11360\t");
    break;
  case 8: printf("102231\t");            
  default:
    break;
  }
}
}