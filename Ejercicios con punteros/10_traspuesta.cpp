#include <stdio.h>
#include <stdlib.h>

void pedir_datos();
void imprimir_matrices();
void traspuesta();

int **pma, **ptras, filas, columnas;

int main()
{
   pedir_datos();
   traspuesta();
   imprimir_matrices();
   free(pma);
   free(ptras);
}

void pedir_datos()
{
    printf("Ingrese numero de filas: ");
    scanf("%d",&filas);
    printf("Ingrese numero de columnas: ");
    scanf("%d",&columnas);

    pma=(int**)malloc(filas*sizeof(int*));
    for(int i=0;i<filas;i++)
    {
        pma[i]=(int*)malloc(columnas*sizeof(int));
    }

    for(int f=0;f<filas;f++)
    {
        for(int c=0;c<columnas;c++)
        {
            printf("Ingrese datos [%d,%d]:  ",f,c);
            scanf("%d",&(*(*(pma+f)+c)));
        }
    }
}

void imprimir_matrices()
{
    printf("\n****LA MATRIS A*****\n");
    for(int f=0;f<filas;f++)
    {
        printf("\n");
        for(int c=0;c<columnas;c++)
        {
            printf("%d ",*(*(pma+f)+c));
        }
    }

    printf("\n\n****LA MATRIS TRASPUESTA DE A****\n");
    for(int c=0;c<columnas;c++)
    {
        printf("\n");
        for(int f=0;f<filas;f++)
        {
            printf("%d ",*(*(ptras+c)+f));
        }
    }
}

void traspuesta()
{
    ptras=(int**)malloc(columnas*sizeof(int));
    for(int i=0;i<columnas;i++)
    {
        ptras[i]=(int*)malloc(filas*sizeof(int));
    }

    for(int c=0;c<columnas;c++)
    {
        for(int f=0;f<filas;f++)
        {
            *(*(ptras+c)+f)=*(*(pma+f)+c);
        }
    }
}
