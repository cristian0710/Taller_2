#include <stdio.h>
#include <stdlib.h>
#define n 3

struct ciclista
{
    int horas, minutos, segundos;
}etapa, *punper=&etapa;

void pedir_datos();
void tiempo();

int main()
{
   pedir_datos();
   tiempo();
}

void pedir_datos()
{
    for(int i=0;i<n;i++)
    {
        printf("****ETAPA %d*****\n",i+1);
        printf("Ingrese horas: ");
        scanf("%d",&(*(punper+i)).horas);
        printf("Ingrese minutos: ");
        scanf("%d",&(*(punper+i)).minutos);
        printf("Ingrese segundos: ");
        scanf("%d",&(*(punper+i)).segundos);
        printf("\n");
    }
}

void tiempo()
{
    int h=0, m=0, s=0, aux;

    for(int i=0;i<n;i++)
    {
        h=h+(*(punper+i)).horas;
        m=m+(*(punper+i)).minutos;
        s=s+(*(punper+i)).segundos;
    }

    if(s%60==0)
    {
        m=m+(s/60);
        s=0;
    }
    else
    {
        aux=s/60;
        m=m+aux;
        s=s%60;
    }

    if(m%60==0)
    {
        h=h+(m/60);
        m=0;
    }
    else
    {
        aux=m/60;
        h=h+aux;
        m=m%60;
    }

    printf("\nEl tiempo total recorrido de las etapas son: %d Horas %d Minutos %d Segundos\n",h,m,s);

}
