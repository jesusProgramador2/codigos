#if !defined(_galletas_h)
    #define _galletas_h 1
    #include<stdlib.h>
    #include<stdio.h>
    #include<time.h>
    
    void impx(char tabla[5][5], FILE *parch)//funcion que le entra un puntero y una tabla e imprime de manera ordenada
    // en un txt la tabla 
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
    void impcon(char tabla[5][5])//funcione que imprime en consola la tabla de manera ordenada
    //
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
    void rellenar(char tabla[5][5]) //funcion que rellena la tabla de guiones
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
    void galleta(char tabla[5][5]) //funcion que por medio de aleatorios y condiciones asigna 5 galletas alrededor del tablero
    //y no se repetin nunca por la condicion siempre va a ver 5 galletas en el tablero
    {
        int i, x, y;
        srand(time(NULL));
        for ( i = 0; i < 5; i++)
        {
            x = rand() % 5;
            y = rand() % 5;
            while (tabla[x][y] == 'O')
            {
                x = rand() % 5;
                y = rand() % 5;
            }
            tabla[x][y] = 'O';

        }
    }   
    void posicion(char tabla[5][5], int posicion[]) //funcion que designa la posicion inicial de 'G' por medio de aleatorios
    //y revisa si es en la posicion de una galleta para nunca asignar esa posicion inicial
    {
        int x, y;
        x = rand() % 5;
        y = rand() % 5;
        while (tabla[x][y] == 'O')
            {
                x = rand() % 5;
                y = rand() % 5;
            }
        tabla[x][y] = 'G';
        posicion[0] = x;
        posicion[1] = y;
    }
    void movimiento(char tabla[5][5], int pos[2])//funcion que da un nuevo valor de posicion adyacente de donde este 'G'
    // con condiciones para que no se salga del  tablero
    {
        int x, y;
        
        do
        {
            x = rand() % 3;
            if (x == 0)
            {
                x = -1;
            }
            if (x == 2)
            {
                x == 0;
            }
            
            //puts("llegue hasta aqui x");
        }while((pos[0] + x) < 0 || (pos[0] + x) > 4);
            
        do
        {
            y = rand() % 3;
            if (y == 0)
            {
                y = -1;
            }
            if (y == 2)
            {
                y = 0;
        }
        
            //puts("llegue hasta aqui y"); //print que me confirmo que el codigo llego hasta aqui fue util para descubirir un errro
        } while ((pos[1] + y) < 0 || (pos[1] + y) > 4);
        pos[0] = pos[0] + x;
        pos[1] = pos[1] + y;
    }
    int contar(char tabla[5][5]) //funcion que cuenta cuantas galleta quedan en el tablero para saber si agarraste una
    // cuando acabaste el juego
    {
        int i, j, cont=0;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (tabla[i][j] == 'O')
                {
                    printf("buenas");
                    cont++;
                    printf("%i",cont);
                }
                
            }
            
        }
        
        
        return cont;
    }
#endif
