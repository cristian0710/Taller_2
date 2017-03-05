#include <stdio.h>
#include <stdlib.h>

void llenar_vector(int *,int *);
void menor(int *,int*);

int main()
{
    int n;
    int *p=&n;

    printf("Ingrese el tamaño del array: ");
    scanf("%d",&(*p));

    int v[*p];
    int *pun=v;
    llenar_vector(pun,p);
    menor(pun,p);

    return 0;
}

void llenar_vector(int *p, int *p2)
{
    for(int i=0;i<*p2;i++)
    {
        printf("Ingrese numero %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void menor(int *p, int *p2)
{
    int aux, c;
    aux=*p;
    for(int i=0;i<*p2;i++)
    {
       if(aux>=*(p+i))
       {
           aux=*(p+i);
           c=i;
       }
    }
    printf("\nEl elemento menor del vector es %d en la pocicion de memoria %d",*(p+c),(p+c));

}
