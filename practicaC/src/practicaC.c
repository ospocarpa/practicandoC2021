#include "practicaC.h"

int main()
{

    char a[] = "Esto es una cadena";
    char b[] = "Es";
    char c[] = "an";
    char z[] = "ena";
    printf("[%s] es prefijo de [%s]? %d\n", b, a, esPrefijo(a, b));
    printf("[%s] es prefijo de [%s]? %d\n", c, a, esPrefijo(a, c));
    printf("[%s] es sufijo de [%s]? %d\n", z, a, esSufijo(a, z));

    return 0;
}