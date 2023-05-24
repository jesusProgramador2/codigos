#include"galletas.h"

int main()
{
    FILE *p;
    char tabla[5][5];
    p = fopen("log.txt","a+");
    
    rellenar(tabla);
    galleta(tabla);
    impcon(tabla);
    impx(tabla,p);
    printf("buenas");
    
    fclose(p);
    return 0;
}
