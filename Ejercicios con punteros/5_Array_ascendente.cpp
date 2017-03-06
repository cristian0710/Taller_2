#include <stdio.h>
#include <stdlib.h>

void datos(int *,int *);
void ordenar(int *,int *);
void imprimir(int *,int *);

int main()
{
    int n, *p=&n;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d",p);

    int v[*p], *p2=v;
    datos(p, p2);
    ordenar(p,p2);
    imprimir(p,p2);
    //printf("%d",*(p2+0));
}

void datos(int *p1,int *p2)
{
    printf("\n");
    for(int i=0;i<*p1;i++)
    {
        printf("Ingrese numero %d: ",i+1);
        scanf("%d",&(*(p2+i)));
    }
}

void imprimir(int *p3, int *p4)
{
    printf("\n*****VECTOR EN FORMA ASCENDENTE*****\n");

    for(int i=0;i<*p3;i++)
    {
        printf("%d  ",*(p4+i));
    }
}

void ordenar(int *p1,int *p2)
{
    int aux, aux2, c;

    for(int n=0;n<*p1;n++)
    {
        aux=*(p2+n);
        for(int i=n;i<*p1;i++)
        {
            if(aux>=*(p2+i))
            {
                aux=*(p2+i);
                c=i;
            }
        }
        aux2=*(p2+n);
        *(p2+n)=aux;
        *(p2+c)=aux2;
    }
}
