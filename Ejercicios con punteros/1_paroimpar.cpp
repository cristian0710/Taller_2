#include <stdio.h>
#include <stdlib.h>

void pedirnumero(int *);
void par_impar(int *);

int main()
{
    int n;
    int *p=&n;
    pedirnumero(p);
    par_impar(p);

    return 0;
}

void pedirnumero(int *pnum)
{
    printf("Ingrese numero: ");
    scanf("%d",&(*pnum));

    printf("El valor %d en la direccion de memoria %d\n",*pnum,pnum);
}

void par_impar(int *parim)
{
    if(*parim%2==0)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }
}
