#include "practicaC.h"

int main()
{
    // funcion que utiliza una variable estatica para retornar
    // en cada invocacion el siguiente numero natural
    // int siguienteNumero();
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", siguienteNumero());
    }
}