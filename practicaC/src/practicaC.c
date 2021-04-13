#include "practicaC.h"

int main()
{

    // ingresar 5 cadenas : {casa,auto,persona,arbol,sol}
    // imprimir en orden inverso

    char *cadenas[5];   // el array de cadenas
    char cadenaAux[10]; // una cadena auxiliar para leer

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese una palabra\n");
        scanf("%s", &cadenaAux);
        //creo una nueva cadena y asigno su direccion a cadenas[i]
        cadenas[i] = (char *)malloc(sizeof(cadenaAux) + 1);

        strcpy(cadenas[i], cadenaAux);
    }
    printf("Orden inverso:\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%s\n", cadenas[i]);
    }
    return 0;
}