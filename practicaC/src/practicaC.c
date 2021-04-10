#include "practicaC.h"

int esPrimo(int n)
{
    int esPrimo = n < 2 ? 0 : 1; // 0 = false
    for (int i = 2; i < n && esPrimo; i++)
    {
        if (n % i == 0)
        {
            esPrimo = 0;
        }
    }
    return esPrimo;
}

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