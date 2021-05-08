#include "practicaC.h"

#include <stdlib.h>
#include <stdio.h>

//desrefenrencia :cambia el valor de i=1 a i=2 por punteros
//mostrar valores antes y despues
int main(void)
{
    int i = 4;
    int *p = malloc(sizeof(int));
    p = &i;
    printf("Antes i vale:%d\n", i);
