#include "practicaC.h"

int main()
{
    // es primo ?

    int n;

    printf("Ingrese un numero\n");
    scanf("%d", &n);
    int esPrimo = n < 2 ? 0 : 1; // 0 = false
    for (int i = 2; i < n && esPrimo; i++)
    {
        if (n % i == 0)
        {
            esPrimo = 0;
        }
    }

    if (esPrimo)
    {
        printf("%d Es primo\n", n);
    }
    else
    {

        printf("%d No es primo\n", n);
    }
}