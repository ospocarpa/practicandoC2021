#include "practicaC.h"

int main()
{
    // Punteros y direcciones de memoria

    int n = 12;
    int *p;
    p = &n;
    *p = 15;
    printf("n:%d\n", n);

    return 0;
}