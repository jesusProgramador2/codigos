#include <iostream>
#include<math.h>
#include<stdio.h>
float aporteseg(float, float);


using namespace std;

int main()
{   float h,v,x;
    v=1160000/30;
    printf("programa que calcula aporte de seguridad social \n\n");
    printf("ingrese dias trabajados");
    cin>>h;
    x = aporteseg(h,v);
    printf("%i",x);
    return 0;
}

float aporteseg(float h,float v)
{   
    float x;
    x = h*(1160000/30)*0.33544;
    return x;
    if(h>=3 && h<=9){
        x=h*(1160000/30)*0.33544;
     printf("el aporte de seguridad que debe hacer es de una semana sobre el minimo %i \n\n",x);
    return x;}
     if(h>=10 && h<=17){
         x=h*(1160000/30)*(0.33544*2);
     
     printf("el aporte de seguridad que debe hacer es de una semana sobre el minimo %i\n\n",x);
    return x; }
    if(h>=18 && h<=24){
        x=h*(1160000/30)*(0.33544*3);
     printf("el aporte de seguridad que debe hacer es de una semana sobre el minimo %i\n\n",x);
    return x;} 
    if(h>=25 && h<=30 ){
        x=h*(1160000/30)*(0.33544*4);
     printf("el aporte de seguridad que debe hacer es de una semana sobre el minimo %i\n\n",x);
    return x;}
    if(h>=30 ){
        x=30*(1160000/30)*(0.33544*4);
     printf("el aporte de seguridad que debe hacer es de una semana sobre el minimo %i\n\n",x);
    return x;}
 
 
}