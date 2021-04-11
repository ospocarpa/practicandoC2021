#include "practicaC.h"

int main()
{
    // factorizar (n) devuelve sus factores

    int n;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    int aux = 0;
    int factor = 2;
    printf("Factores de %d\n", n);
    while (factorizar(n, &factor, &aux))
    {
        printf("factor:%d\t", factor);
    }

    return 0;
}