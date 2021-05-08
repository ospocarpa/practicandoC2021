#include "practicaC.h"

#include <stdlib.h>
#include <stdio.h>
#include <commons/log.h>
#include <commons/string.h>

typedef struct
{
    char nombre[20];
    char apellido[20];
    int edad;
} t_persona;

int main(void)
{
    t_persona *p = malloc(sizeof(t_persona));
    strcpy(p->nombre, "Esteban");
    strcpy(p->apellido, "Trabajos");
    p->edad = 56;
    printf("\nNombre:%s\nApellido:%s\nEdad:%d\n", p->nombre, p->apellido, p->edad);
}
