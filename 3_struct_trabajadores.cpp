#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct trabajadores
{
    char nom[30];
    int sal, ced;
}empleado[100];

void menor_mayor(int *p);

int main()
{
    int n;
    printf("Digite cantidad de trabajadores: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Ingrese nombre trabajador %d: ",i+1);
        scanf("%s",empleado[i].nom);
        printf("Ingrese cedula: ");
        scanf("%d",&empleado[i].ced);
        printf("Ingrese salario: ");
        scanf("%d",&empleado[i].sal);
    }

    menor_mayor(&n);

}

void menor_mayor(int *p)
{
    int aux, aux2, c=0, c2=0;
    aux=empleado[0].sal;
    aux2=empleado[0].sal;

    for(int i=0;i<*p;i++)
    {
        if(aux<=empleado[i].sal);
        {
            aux=empleado[i].sal;
            c=i;
        }

        if(aux2>=empleado[i].sal)
        {
            aux2=empleado[i].sal;
            c2=i;
        }
    }
    printf("\n******MEYOR SALARIO******\n");
    printf("Nombre: %s\n",empleado[c].nom);
    printf("Cedula: %d\n",empleado[c].ced);
    printf("Sueldo: %d\n",aux);

    printf("\n******MENOR SALARIO******\n");
    printf("Nombre: %s\n",empleado[c2].nom);
    printf("Cedula: %d\n",empleado[c2].ced);
    printf("Sueldo: %d\n",aux2);

    printf("%d",*p);
}



