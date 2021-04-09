#include "practicaC.h"

#define MAX(X, Y) X > Y ? X : Y
#define MIN(X, Y) X < Y ? X : Y

int main()
{
    // ingrese 3 valores distintos

    int a, b, c, mayor, medio, menor;
    printf("Ingrese 3 valores distintos \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        mayor = a;
        medio = MAX(b, c);
        menor = MIN(b, c);
    }
    else if (b > a && b > c)
    {
        mayor = b;
        medio = MAX(a, c);
        menor = MIN(a, c);
    }
    else
    {
        mayor = c;
        medio = MAX(a, b);
        menor = MIN(a, b);
    }

    printf("Mayor: %d\n", mayor);
    printf("Medio: %d\n", medio);
    printf("Menor: %d\n", menor);
}