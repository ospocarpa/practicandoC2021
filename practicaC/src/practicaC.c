#include "practicaC.h"

int main()
{

    //Dado un cjto de numeros enteros determinar cuantas veces se repite cada uno
    // los datos se ingresan sin orden y finaliza con 0 .Se garantiza que a lo sumo habra 100 numeros diferentes
    int arr[50], aux[50];
    int len = 0;
    int enc;
    int n;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    while (len < 100 && n != 0)
    {
        int pos = buscarYAgregar(aux, &len, n, &enc);
        arr[pos] = enc ? ++arr[pos] : 1;
        printf("Ingrese un numero\n");
        scanf("%d", &n);
    }
    printf("______________________\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d aparece %d veces\n", aux[i], arr[i]);
    }

    return 0;
}