#ifndef PRACTICAC_H
#define PRACTICAC_H

#include <stdio.h>
#include <stdbool.h>
#include "shared_utils.h"
#include "string.h"


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



#endif