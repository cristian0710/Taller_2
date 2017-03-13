#include <stdio.h>
#include <stdlib.h>

struct alumno
{
    char nom[30];
    int edad;
    float prom;
}estuden[3], *pestuden=estuden;

void datos();
void mejor_promedio();

int main()
{
    datos();
    mejor_promedio();
}

void datos()
{
    for(int i=0;i<3;i++)
    {
        printf("Ingrese nombre: ");
        scanf("%s",(*(pestuden+i)).nom);
        printf("Ingrese la edad: ");
        scanf("%d",&(*(pestuden+i)).edad);
        printf("Ingrese promedio: ");
        scanf("%f",&(*(pestuden+i)).prom);
    }

    printf("%s",(*(pestuden+1)).nom);
}

void mejor_promedio()
{
    float aux=(*(pestuden+0)).prom;
    int c;

    for(int i=0;i<3;i++)
    {
        if(aux<=(*(pestuden+i)).prom)
        {
            aux=(*(pestuden+i)).prom;
            c=i;
        }
    }

    printf("\n\n*****MEJOR PROMEDIO*****\n");
    printf("Nombre: %s\n",(*(pestuden+c)).nom);
    printf("Edad: %d\n",(*(pestuden+c)).edad);
    printf("Promedio: %f\n",(*(pestuden+c)).prom);
}


