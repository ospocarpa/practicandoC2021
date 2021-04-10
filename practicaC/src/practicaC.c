#include "practicaC.h"
#include "string.h"

int main()
{
    // Dia de la semana (usando case)

    int nd;
    char dia[10];
    printf("Ingrese un dia de la semana\n");
    scanf("%d", &nd);

    switch (nd)
    {
    case 1:
        strcpy(dia, "Lunes");
        break;
    case 2:
        strcpy(dia, "Martes");
        break;
    case 3:
        strcpy(dia, "Miercoles");
        break;
    case 4:
        strcpy(dia, "Jueves");
        break;
    case 5:
        strcpy(dia, "Viernes");
        break;
    case 6:
        strcpy(dia, "Sabado");
        break;
    case 7:
        strcpy(dia, "Domingo");
        break;
    }

    printf("Dia de la semana %d:%s\n", nd, dia);
}