#include "practicaC.h"

int main()
{
    // creando arrays dinamicamente
    int n;
    printf("Ingrese un entero para dimensionar un array\n");
    scanf("%d", &n);
    int *sArr;
    sArr = (int *)malloc(sizeof(int) * n);

    // inicializamos los valores
    for (int i = 0; i < n; i++)
    {
        printf("Numero: ");
        scanf("%d", &sArr[i]);
    }
    // sArr[n] = '\0';
    // mostramos los valores
    for (int i = 0; i < n; i++)
    {
        printf("%d ", sArr[i]);
    }
    return 0;
}