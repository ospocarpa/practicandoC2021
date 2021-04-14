#ifndef PRACTICAC_H
#define PRACTICAC_H

#include <stdio.h>
#include <stdbool.h>
#include "shared_utils.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>

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

// int siguienteNroPrimo(int *temp)
// {
//     *temp = *temp + 1;

//     while (!esPrimo(*temp))
//     {
//         ++*temp;
//     }
//     return *temp;
// }
//siguiente numeroprimo con variable estatica
int siguienteNroPrimo()
{
    static int temp = 1;
    temp++;
    while (!esPrimo(temp))
    {
        temp++;
    }
    return temp;
}

// n=60;
// int factorizar(int n, int *factor, int *temp)
// {
//     *temp = *temp == 0 ? n : *temp;
//     int i = 2;
//     while (*temp % i != 0 && i <= *temp)
//     {
//         i++;
//     }
//     *temp = *temp / i;
//     *factor = i;

//     return *temp >= 1;
// }
//factorizar con modificador statics
int factorizar(int n, int *factor)
{
    static int temp = 0;
    temp = temp == 0 ? n : temp;
    int i = 2;
    while (temp % i != 0 && i <= temp)
    {
        i++;
    }
    temp = temp / i;
    *factor = i;

    return temp >= 1;
}

// funcion que utiliza una variable estatica para retornar
// en cada invocacion el siguiente numero natural
int siguienteNumero()
{
    static int n = 0;
    n++;
    return n;
}
int longitud(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int potencia(int base, int expo)
{ //b=3  e=4
    int ret = 1;
    for (int i = 0; i < expo; i++)
    { // 3*3*3*3=81
        ret *= base;
    }
    return ret;
}

long cadenaAEntero(char s[])
{
    int n = longitud(s);
    long ret = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        ret = ret + (s[i] - '0') * potencia(10, n - i - 1);
    }

    return ret;
}
long cadenaAEnteroB(char s[], int base)
{
    int n = longitud(s);
    long ret = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] - '0' > 9)
        {
            ret = ret + (s[i] - 'A' + 10) * potencia(base, n - i - 1);
        }
        else
        {
            ret = ret + (s[i] - '0') * potencia(base, n - i - 1);
        }
    }
    return ret;
}
void recibeArray(char x[])
{
    printf("x = %s\n", x);
    printf("x[3] = %c \n", x[3]);
}
void recibePuntero(char *x)
{
    printf("x = %s\n", x);
    printf("x[3] = %c \n", x[3]);
}
int esPrefijo(char s[], char p[])
{
    int n = strlen(p);
    return strncmp(s, p, n) == 0;
}
int esSufijo(char s[], char p[])
{
    int desde = strlen(s) - strlen(p);
    return strcmp(s + desde, p) == 0;
}

char *obtenerSaludo()
{
    char s[] = "Hola mundo";
    int n = strlen(s);
    char *r = (char *)malloc(n + 1);
    stpcpy(r, s);
    return r;
}

void inicializarContadores(int s[])
{
    for (int i = 0; i < 100; i++)
    {
        s[i] = 0;
    }
}

void mostrarResultados(int s[])
{
    printf("Mostrando resultados \n");
    for (int i = 0; i < 100; i++)
    {
        if (s[i] > 0)
        {
            printf("%d aparece  %d veces\n", i, s[i]);
        }
    }
}

int agregar(int arr[], int *len, int v)
{
    arr[*len] = v;
    (*len)++;
    return *len - 1;
}

#endif