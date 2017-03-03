#include <stdio.h>

struct promedio
{
    float n1, n2, n3;
};

struct alumno
{
    char nom[30];
    int edad, grd;
    promedio prom;
};
//PROTOTIPOS
void datos();
void prom(float a,float b,float c);
void imprimir();
//DIFINICION DE ESTRUCTURA
alumno estudiante;

int main()
{
    datos();
    imprimir();
}

void prom(float a,float b,float c)
{
    float r;
    r=(a+b+c)/3;
    printf("\nEl promedio es: %1.1f",r);
}

void datos()
{
    printf("Ingrese nombre: ");
    scanf("%s",estudiante.nom);
    printf("Ingrese grado: ");
    scanf("%d",&estudiante.grd);
    printf("Ingrese edad: ");
    scanf("%d",&estudiante.edad);
    printf("Ingrese nota 1: ");
    scanf("%f",&estudiante.prom.n1);
    printf("Ingrese nota 2: ");
    scanf("%f",&estudiante.prom.n2);
    printf("Ingrese nota 3: ");
    scanf("%f",&estudiante.prom.n3);
}

void imprimir()
{
    printf("\n");
    printf("Nombre: %s\n",estudiante.nom);
    printf("Grado: %d\n",estudiante.grd);
    printf("Edad: %d\n",estudiante.edad);
    printf("Nota 1: %1.1f\n",estudiante.prom.n1);
    printf("Nota 2: %1.1f\n",estudiante.prom.n2);
    printf("Nota 3: %1.1f\n",estudiante.prom.n3);

    prom(estudiante.prom.n1,estudiante.prom.n2,estudiante.prom.n3);
}
