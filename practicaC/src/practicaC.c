#include "practicaC.h"

int main()
{
    //factorizar con static
    //int factorizar(n,int* factor)
    int n, factor;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    printf("Factores de %d\n", n);
    while (factorizar(n, &factor))
    {
        printf("%d\t", factor);
    }
}