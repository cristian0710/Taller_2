#include <stdio.h>
#include <stdlib.h>

struct promedio
{
    float n1, n2, n3, prom;
};

struct estudiante
{
    char nom[30];
    int edad, grd;
    promedio nota[100];
}alumno[100];

void datos();
void mayor_menor(int *p);

int n;

int main()
{
    datos();
    mayor_menor(&n);
}

void datos()
{
    printf("Ingrese cantidad de estudiantes: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Estudiante %d nombre: ",i+1);
        scanf("%s",alumno[i].nom);
        printf("Estudiante %d edad: ",i+1);
        scanf("%d",&alumno[i].edad);
        printf("Estudiante %d grado: ",i+1);
        scanf("%d",&alumno[i].grd);
        printf("Estudiante %d nota 1: ",i+1);
        scanf("%f",&alumno[i].nota[i].n1);
        printf("Estudiante %d nota 2: ",i+1);
        scanf("%f",&alumno[i].nota[i].n2);
        printf("Estudiante %d nota 3: ",i+1);
        scanf("%f",&alumno[i].nota[i].n3);
        alumno[i].nota[i].prom=(alumno[i].nota[i].n1+alumno[i].nota[i].n2+alumno[i].nota[i].n3)/3;
        printf("\n");
    }
}

void mayor_menor(int *p)
{
    system("cls");

    float aux, aux2;
    int c, c2;

    aux=alumno[0].nota[0].prom;
    aux2=alumno[0].nota[0].prom;

    for(int i=0;i<*p;i++)
    {
        if(aux<=alumno[i].nota[i].prom)
        {
            aux=alumno[i].nota[i].prom;
            c=i;
        }
    }

    for(int i=0;i<*p;i++)
    {
        if(aux2>=alumno[i].nota[i].prom)
        {
            aux2=alumno[i].nota[i].prom;
            c2=i;
        }
    }

    printf("\n******MAYOR PROMEDIO******\n");
    printf("Nombre: %s\n",alumno[c].nom);
    printf("Edad: %d\n",alumno[c].edad);
    printf("Grado: %d\n",alumno[c].grd);
    printf("Promedio: %1.1f\n",aux);

    printf("\n******MENOR PROMEDIO******\n");
    printf("Nombre: %s\n",alumno[c2].nom);
    printf("Edad: %d\n",alumno[c2].edad);
    printf("Grado: %d\n",alumno[c2].grd);
    printf("Promedio: %1.1f\n",aux2);

    system("pause");

}




