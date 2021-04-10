#include "practicaC.h"



int main()
{
    // Mostrar los primeros n primos

    int n;
    int i = 2;
    printf("Ingrese un numero\n");
    scanf("%d", &n);

    for (int j = 0; j < n; j++)
    {
        while (!esPrimo(i))
        {
            i++;
        }
        printf("%dºprimo:%d\t", j + 1, i);
        i++;
    }
}