#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pedir_nombre(char *,int *);
void contar_volcales(char *,int *);

int main()
{
    char nom[30], *pchar=nom;
    int n, *pn=&n;

    pedir_nombre(pchar,pn);
    contar_volcales(pchar,pn);

    *pn=strlen(nom);

    //printf("\n%c   %d",*(pchar+10),*pn);
    //printf("\n%s",pchar);

}

void pedir_nombre(char *pc, int *pn)
{
    printf("Ingrese nombre: ");
    scanf("%[^\n]",pc);

}

void contar_volcales(char *pc, int *pn)
{
    int c=0;
    for (int i=0;i<*pc;i++)
    {
        if(*(pc+i)=='a' || *(pc+i)=='A' || *(pc+i)=='e' || *(pc+i)=='E' || *(pc+i)=='i' || *(pc+i)=='I' || *(pc+i)=='o' || *(pc+i)=='O' || *(pc+i)=='u' || *(pc+i)=='U')
        {
            c++;
        }
    }
    printf("\nLa cantida de vocales que hay en el nombre: %d\n",c);
}
