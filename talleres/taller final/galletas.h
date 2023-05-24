#if !defined(_galletas_h)
    #define _galletas_h 1
    #include<stdlib.h>
    #include<stdio.h>
    #include<time.h>
    
    void impx( char tabla[5][5], FILE *parch)
    {
        int i, j;
        
        fprintf(parch,"\n");
        for ( i = 0; i < 5; i++)
        {
            fprintf(parch,"\n");
            for ( j = 0; j < 5; j++)
            {
                fprintf(parch,"%c ", tabla[i][j]);
            }
        }   
    }
    void impcon(char tabla[5][5])
    {
        int i,j;
        puts("");
        for ( i = 0; i < 5; i++)
        {
            puts("");
            for ( j = 0; j < 5; j++)
            {
                printf("%c ",tabla[i][j]);
            }
        }
    }
    void rellenar(char tabla[5][5])
    {
        int i, j;
        for ( i = 0; i < 5; i++)
        {
            for ( j = 0; j < 5; j++)
            {
                tabla[i][j] = '-';
            }
        }
    }
    void galleta(char tabla[5][5])
    {
        int i, x, y, pointer;
        srand(time(NULL));
        for ( i = 0; i < 5; i++)
        {
            x = rand() % 5;
            y = rand() % 5;
            tabla[x][y] = 'G';   
        }
    }   
#endif