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

#endif