#include "practicaC.h"

int main()
{
    // inicializando cadenas : "pablo","juan",{0}
    char s[10] = "Pablo"; // longitud:5 ,almacena:5+1 caracteres y
    // utiliza 5+1 bytes de memoria (capacidad=10)
    char t[] = "Juan";
    char w[10] = {0};
    printf("s = [%s]\n", s);
    printf("t = [%s]\n", t);
    printf("w= [%s]\n", w);
}