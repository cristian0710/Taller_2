#include <stdio.h>
#include <stdlib.h>

void llenar_vector(int *);
void num_par(int *);

int main()
{
    int v[10], a;
    int *p=v;

    llenar_vector(p);
    num_par(p);
    //printf("%d   %p",v[1],&v[1]);
}

void llenar_vector(int *pvector)
{
    for(int i=0;i<10;i++)
    {
        printf("Ingrese numero %d: ",i+1);
        scanf("%d",&(*(pvector+i)));
    }
}

void num_par(int *par)
{
    printf("\n");
    for(int i=0;i<10;i++)
    {
        if(*(par+i)%2==0)
        {
            printf("El numero %d es par en la pocicion de memoria %p\n",*(par+i),par+i);
        }
    }
}
