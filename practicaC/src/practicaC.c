#include "practicaC.h"

int main()
{
    // creando arrays dinamicamente de tipo char*
    int n;
    printf("Ingrese un entero para dimensionar un array\n");
    scanf("%d", &n);
    char *h;

    char *sArr = (char *)malloc(n);

    // inicializamos los valores
    scanf("%s", h);
    for (int i = 0; i < n; i++)
    {

        sArr[i] = h[i];
    }
    // sArr[n] = '\0';
    // mostramos los valores
    for (int i = 0; i < n; i++)
    {
        printf("%c ", sArr[i]);
    }
    return 0;
}