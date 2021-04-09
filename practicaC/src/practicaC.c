#include "practicaC.h"

int main()
{
    // pasar de aaaammdd a : aniio , mes, dia
    long fec;
    int dia, mes, anio;
    printf("Ingrese una fecha(aaaaammdd)\n");
    scanf("%ld", &fec);
    anio = fec / 10000;
    int res = fec % 10000;
    mes = res / 100;
    dia = res % 100;

    printf("Dia:  %d\n", dia);
    printf("Mes:  %d\n", mes);
    printf("Anio: %d\n", anio);
}