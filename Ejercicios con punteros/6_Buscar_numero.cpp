#include <stdio.h>
#include <stdlib.h>

void datos(int *,int *);
void buscar_dato(int *,int *);



int main()
{
    int n, *p=&n;
    printf("Ingrese cantidad de numeros: ");
    scanf("%d",&(*p));
    int arreglo[*p], *p2=arreglo;
    datos(p,p2);
    buscar_dato(p,p2);
    return 0;
}
void datos(int *punt1,int *punt2)
{
    printf("\n");
    for(int i=0;i<*punt1;i++)
    {
        printf("Ingrese numero %d: ",i+1);
        scanf("%d",&*(punt2+i));
    }
}
void buscar_dato(int *punt1,int *punt2)
{
    int x, c=0;
    printf("\nIngrese numero que desea buscar en el vector: ");
    scanf("%d",&x);
    for(int i=0;i<*punt1;i+=1)
    {
        if(x==*(punt2+i))
        {
            printf("El numero %d esta en el vector. Posicion: %d  direccion en memoria: %d\n",*(punt2+i),i+1,&(*(punt2+i)));
            c+=1;
        }
    }
    if(c==0)
    {
        printf("\nEl numero ingresado no se encuentra en el vector\n");
    }
}

