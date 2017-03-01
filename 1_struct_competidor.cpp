#include <stdio.h>

void categoria();

struct competidor
{
    char n[30], sex[10], club[30];
    int e;

};

void categoria(int x)
{
    if(x<=15)
    {
        printf("Categoria infantil");
    }
    else
    {
        if(x<=30)
        {
            printf("Categoria juvenil");
        }
        else
        {
            printf("Categoria mayor");
        }
    }
}

int main()
{
    struct competidor comp;

    printf("Ingrese nombre: ");
    scanf("%s",comp.n);
    printf("Ingrese la edad: ");
    scanf("%d",&comp.e);
    printf("Ingrese el sexo: ");
    scanf("%s",comp.sex);
    printf("Ingrese el club: ");
    scanf("%s",comp.club);

    printf("\n");
    printf("Nombre: %s\n",comp.n);
    printf("Edad: %d\n",comp.e);
    printf("Sexo: %s\n",comp.sex);
    printf("Club: %s\n",comp.club);

    categoria(comp.e);

    return 0;

}
