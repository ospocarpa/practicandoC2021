#include "practicaC.h"

int main()
{
    int v;

    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese un valor entero\n");
        scanf("%d", &v);
        a[i] = v;
    }
    printf("Orden original: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nOrden inverso: \n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}