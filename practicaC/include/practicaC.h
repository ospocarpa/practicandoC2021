#ifndef PRACTICAC_H
#define PRACTICAC_H

#include <stdio.h>
#include <stdbool.h>
#include "shared_utils.h"
#include "string.h"

void dividirFecha(long f, int *d, int *m, int *a)
{
    *a = f / 10000;
    int resto = f % 10000;
    *m = resto / 100;
    *d = resto % 100;
}

int esAnioBisiesto(int a)
{
    int div4 = (a % 4 == 0);
    int div100 = (a % 100 == 0);
    int div400 = (a % 400 == 0);
    return div4 && (!div100 || div400);
}

int esPrimo(int n)
{
    int esPrimo = n < 2 ? 0 : 1; // 0 = false
    for (int i = 2; i < n && esPrimo; i++)
    {
        if (n % i == 0)
        {
            esPrimo = 0;
        }
    }
    return esPrimo;
}

int siguienteNroPrimo(int *temp)
{
    *temp = *temp + 1;

    while (!esPrimo(*temp))
    {
        ++*temp;
    }
    return *temp;
}
// n=60;
int factorizar(int n, int *factor, int *temp)
{
    *temp = *temp == 0 ? n : *temp;
    int i = 2;
    while (*temp % i != 0 && i <= *temp)
    {
        i++;
    }
    *temp = *temp / i;
    *factor = i;

    return *temp >= 1;
}
// funcion que utiliza una variable estatica para retornar
// en cada invocacion el siguiente numero natural
int siguienteNumero()
{
    static int n = 0;
    n++;
    return n;
}

#endif