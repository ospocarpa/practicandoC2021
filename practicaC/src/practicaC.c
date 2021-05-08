#include "practicaC.h"

#include <stdlib.h>
#include <stdio.h>
#include <commons/log.h>
#include <commons/string.h>

void sumarUno(int *unaVariable)
{
    *unaVariable = *unaVariable + 1;
    printf("Dentro de la funcion, i vale: %d\n", *unaVariable);
}

int main(void)
{
    int i = 1;

    printf("Antes de ejecutar la funcion, i vale: %d\n", i);
    sumarUno(&i);
    printf("Despues de ejecutar la funcion, i vale: %d\n", i);

    return 0;
}
