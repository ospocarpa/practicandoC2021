#include "practicaC.h"

int main()
{

    char s[] = "12345";
    long n = cadenaAEntero(s);
    printf("Cadena = [%s]\n", s);
    printf("Numero = [%ld]\n", n);
    printf("\n%d\n", potencia(2, 4));
    printf("\n%lf\n", pow(2.2, 4.0));
    printf("\n---------------\n");
    printf("A10(16)->(10):%ld\n", cadenaAEnteroB("A10", 16));
    return 0;
}