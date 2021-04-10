#include "practicaC.h"

void permutar(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    // Permutar (funcion pasando direccion de memoria de los argumentos)

    int x = 5, y = 2;
    printf("Antes de permutar:x=%d\ty=%d\n", x, y);
    permutar(&x, &y);
    printf("Despues de permutar:x=%d\ty=%d\n", x, y);
}