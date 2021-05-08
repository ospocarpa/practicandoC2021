#include "practicaC.h"

#include <stdlib.h>
#include <stdio.h>
#include <commons/log.h>
#include <commons/string.h>

//desrefenrencia :cambia el valor de i=1 a i=2 por punteros
//mostrar valores antes y despues
int main(void)
{
    int i = 4;
    int *p = malloc(sizeof(int));
    p = &i;
    printf("Antes i vale:%d\n", i);
    *p = 2;
    printf("Ahora i vale:%d\n", *p);
    t_log *logger = log_create("cfg/practicaC.log", "PRACTICAC", 1, LOG_LEVEL_INFO);
    log_info(logger, "Usando la shared\n");
    log_destroy(logger);
    //free(p);
}