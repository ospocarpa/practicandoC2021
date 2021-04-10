#include "practicaC.h"

int main()
{
    // Se dispone de un cjto de valores que representan fechas como numeros  enteros de 8 digitos (aaaammdd)
    //Informar
    //1)    cuantas fechas son de marzo
    // 2)   cuantas fechas tienen anios bisiestos
    // 3)   errores : con m=2,d=29 y anio no bisiesto

    int cantMarzo = 0, cantBisiestos = 0, cantErrores = 0;
    long f;
    int dia, mes, anio;
    printf("Ingrese una fecha (0 para finalizar)\n");
    scanf("%ld", &f);
    while (f != 0)
    {
        dividirFecha(f, &dia, &mes, &anio);
        int anioBisiesto = esAnioBisiesto(anio);
        if (mes == 3)
        {
            cantMarzo++;
        }

        if (anioBisiesto)
        {
            cantBisiestos++;
        }
        else if (mes == 2 && dia == 29)
        {
            cantErrores++;
        }

        printf("-----------------------------------------\n");
        printf("Ingrese una fecha (0 para finalizar)\n");
        scanf("%ld", &f);
    }
    printf("Fechas de marzo:%d\n", cantMarzo);
    printf("Anios bisiestos:%d\n", cantBisiestos);
    printf("Fechas con error:%d\n", cantErrores);

    return 0;
}