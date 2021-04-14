#include "practicaC.h"
void inicializarContadores(int s[])
{
    for (int i = 0; i < 100; i++)
    {
        s[i] = 0;
    }
}

void mostrarResultados(int s[])
{
    printf("Mostrando resultados \n");
    for (int i = 0; i < 100; i++)
    {
        if (s[i] > 0)
        {
            printf("%d aparece  %d veces\n", i, s[i]);
        }
    }
}

int main()
{

    // Dado un cjto de numeros enteros ,entre 0 -99
    // Informar cuantas, veces aparece cada uno
    // A = {6,2,8,1,6,1,3,2,1,2,8,3,1}
    int s[100];
    inicializarContadores(s);
    int n;
    printf("Ingrese un entero 0-99\n");
    scanf("%d", &n);
    while (n >= 0)
    {
        s[n]++;
        printf("Ingrese un entero 0-99\n");
        scanf("%d", &n);
    }

    mostrarResultados(s);

    return 0;
}