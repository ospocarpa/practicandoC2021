#include "practicaC.h"

char *copiar(char *palabra)
{
    char *tmp = malloc(sizeof(char) * strlen(palabra) + 1);
    memcpy(tmp, palabra, strlen(palabra));
    tmp[strlen(palabra)] = '\0';
    return tmp;
}

int main(void)
{
    char **nombres;
    //Grabo espacio para 4 punteros a nombres
    nombres = malloc(sizeof(char *) * 4);

    //Grabo cada una de las palabras
    nombres[0] = copiar("Joaquin");  //7 + 1 chars
    nombres[1] = copiar("Matias");   //6 + 1 chars
    nombres[2] = copiar("Santiago"); //8 + 1 chars
    nombres[3] = copiar("Gaston");   //6 + 1 chars

    //free(nombres);
}
