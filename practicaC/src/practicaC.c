#include "practicaC.h"

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *p = malloc(sizeof(int));
    *p = 1;
    printf("p = %d\n", p);
    printf("&p = %p\n", &p);
    return 0;
}