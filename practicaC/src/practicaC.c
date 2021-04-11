#include "practicaC.h"

int main()
{
    //funciones que mantienen su estado
    // int siguienteNroPrimo(int* temp);
    //Ingrese los primeros n primos

    int n;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    int aux = 0;
    for (int i = 0; i < n; i++)
    {
        aux = siguienteNroPrimo(&aux);
        printf("%dºprimo:%d\t", i + 1, aux);
    }
    return 0;
}