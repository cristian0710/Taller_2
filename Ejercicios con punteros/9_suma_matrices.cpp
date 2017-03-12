#include <stdio.h>
#include <stdlib.h>

void imprimir_matrices();
void pedir_datos();
void suma_matrices();

int **pma, **pma2, **pmar, filas, columnas;

int main()
{
    pedir_datos();
    suma_matrices();
    imprimir_matrices();
    free(pma);
    free(pma2);
}

void pedir_datos()
{
    printf("Ingrese numero de filas: ");
    scanf("%d",&filas);
    printf("Ingres numero de colimnas: ");
    scanf("%d",&columnas);
    //Se reserva memoria para la matris A
    pma=(int**)malloc(filas*sizeof(int*));
    for(int i=0;i<filas;i++)
    {
        pma[i]=(int*)malloc(columnas*sizeof(int));
    }
    //Se reserva memoria para la matris B
    pma2=(int**)malloc(filas*sizeof(int*));
    for(int i=0;i<filas;i++)
    {
        pma2[i]=(int*)malloc(columnas*sizeof(int));
    }
    //PEDIR DATOS DE MATRIS A
    printf("\n*****MATRIS A*****\n");
    for(int f=0;f<filas;f++)
    {
        for(int c=0;c<columnas;c++)
        {
            printf("Ingrese datos [%d,%d]: ",f,c);
            scanf("%d",&(*(*(pma+f)+c)));
        }
    }
    //PEDIR DATOS DE MATRIS B
    printf("\n*****MATRIS B*****\n");
    for(int f=0;f<filas;f++)
    {
        for(int c=0;c<columnas;c++)
        {
            printf("Ingrese datos [%d,%d]: ",f,c);
            scanf("%d",&(*(*(pma2+f)+c)));
        }
    }
}

void imprimir_matrices()
{
    printf("\n*****LA MATRIS A*****\n");
    for(int f=0;f<filas;f++)
    {
        printf("\n");
        for(int c=0;c<columnas;c++)
        {
            printf("%d ",*(*(pma+f)+c));
        }
    }

    printf("\n*****LA MATRIS B*****\n");
    for(int f=0;f<filas;f++)
    {
        printf("\n");
        for(int c=0;c<columnas;c++)
        {
            printf("%d ",*(*(pma2+f)+c));
        }
    }

    printf("\n*****LA SUMA DE LA MATRIS A Y B*****\n");
    for(int f=0;f<filas;f++)
    {
        printf("\n");
        for(int c=0;c<columnas;c++)
        {
            printf("%d ",*(*(pmar+f)+c));
        }
    }
}

void suma_matrices()
{
     //Se reserva memoria para la matris resultante
    pmar=(int**)malloc(filas*sizeof(int*));
    for(int i=0;i<filas;i++)
    {
        pmar[i]=(int*)malloc(columnas*sizeof(int));
    }

    for(int f=0;f<filas;f++)
    {
        for(int c=0;c<columnas;c++)
        {
            *(*(pmar+f)+c)=(*(*(pma+f)+c))+(*(*(pma2+f)+c));
        }
    }
}

