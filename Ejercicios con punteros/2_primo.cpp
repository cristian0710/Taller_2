#include <stdio.h>
#include <stdlib.h>

void datos(int *);
void primo(int *);

int main()
{
    int n, *p=&n;
    datos(p);
    primo(p);

    return 0;
}

void datos(int *pun)
{
    printf("Ingrese numero: ");
    scanf("%d",&(*pun));

    printf("La direccion de memoria es %d\n",pun);
}

void primo(int *pun)
{
    int c=0;
    for(int i=1;i<=*pun;i++)
    {
        if(*pun%i==0)
        {
            c=c+1;
        }
    }

    if(c==2)
    {
        printf("El numero %d si es primo",*pun);
    }
    else
    {
        printf("El numero %d no es primo",*pun);
    }
}
