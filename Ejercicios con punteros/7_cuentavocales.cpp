#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ingresar_nom(char *);
void comparar(int *,char *);

int main()
{
    char nom[30], *p=nom;
    int n, *p2=&n;

    ingresar_nom(p);
    n=strlen(nom);
    comparar(p2,p);
    //printf("\n%d   %c",n,*(p+0));


}

void ingresar_nom(char *pchar)
{
    printf("Ingrese nombre: ");
    scanf("%s",pchar);
    printf("%s",pchar);
}

void comparar(int *pnum,char *pchar)
{
    printf("\nLas volcales hay son: ");
    for(int i=0;i<*pnum;i++)
    {
        if(*(pchar+i)=='a' || *(pchar+i)=='A' || *(pchar+i)=='e' || *(pchar+i)=='E' || *(pchar+i)=='i' || *(pchar+i)=='I' || *(pchar+i)=='o' || *(pchar+i)=='O' || *(pchar+i)=='u' || *(pchar+i)=='U')
        {
            printf("%c  ",*(pchar+i));
        }
    }
}
