#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

main()
{
    float a, b, c, pitagoras;
    printf("programa que te dice si se puede hacer un apartir de sus lados triangulo y si es rectagulo\n");
    printf("ingrese primer numero\n");
    cin >> a;
    printf("ingrese segundo numero\n");
    cin >> b;
    printf("ingrese tercer numero\n");
    cin >> c;
    
    //esto es para descartar numero negativos y el cero ya que con ellos no se puede formar un triangulo
    if (a > 0 || b > 0 || c > 0)
    {
    
      printf("se puede formar un triangulo con esos lados\n");
        
      if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
      {
        printf(" y el triangulo es rectangulo\n");
        printf("a =%f b = %f c = %f",a,b,c);
      }     
     else
     {
        printf("a =%f b = %f c = %f\n",a,b,c);
        printf(" y el triangulo no es rectangulo");
     }
    }
    else
      printf("no se puede formar un triangulo");


   
   
   
   return 0;
}
