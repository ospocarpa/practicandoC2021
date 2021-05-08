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
    struct t_persona *hijo;
} t_persona;
int main(void)
{
    t_persona *p = malloc(sizeof(t_persona));
    strcpy(p->nombre, "Esteban");
    strcpy(p->apellido, "Lupi");
    p->edad = 26;
    p->hijo = malloc(sizeof(t_persona));
    printf("\nNombre:%s\nApellido:%s\nEdad:%d\n", p->nombre, p->apellido, p->edad);
    printf("Creamos al hijo de esteban\n");
    printf("_---------------\n");
    t_persona *nene = malloc(sizeof(t_persona));
    strcpy(nene->nombre, "nico");
    strcpy(nene->apellido, "Lupi");
    nene->edad = 1;
    nene->hijo = NULL;
    p->hijo = nene;
    printf("_---------------\n");
    printf("\nNombre:%s\nApellido:%s\nEdad:%d\nHijo:%p", p->nombre, p->apellido, p->edad, p->hijo);
    printf("_---------------\n");
    printf("\nnombre:%s\nApellido:%s\nEdad:%d\nHijo:%p", nene->nombre, nene->apellido, nene->edad, nene->hijo);
    printf("\nLa direccion de nene es %p\n", nene);
}
