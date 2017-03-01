#include <stdio.h>

struct estudiante
{
    int grd, edad;
    float prom;
    char a[30];
}alumno[3];

int main()
{
    float aux;
    int c=0;

    for(int i=0;i<3;i++)
    {
        printf("Ingrese nombre: ");
        scanf("%s",alumno[i].a);
        printf("Ingrese edad: ");
        scanf("%d",&alumno[i].edad);
        printf("Ingrese el grado: ");
        scanf("%d",&alumno[i].grd);
        printf("Ingrese el promedio: ");
        scanf("%f",&alumno[i].prom);
        printf("\n");
    }

    aux=alumno[0].prom;

    for(int i=0;i<3;i++)
    {
        if(aux<=alumno[i].prom)
        {
            aux=alumno[i].prom;
            c=i;
        }
    }

    printf("El alumno con mejor promedio es: %s\n",alumno[c].a);
    printf("El promdeio: %1.1f\n",alumno[c].prom);
    printf("Grado: %d\n",alumno[c].grd);
    printf("Edad: %d\n",alumno[c].edad);



    return 0;
}
