#include "practicaC.h"


int main(){
    // Lee dos valores enteros e informar su cociente

    
   
    int n1,n2 ;
    float div;
    printf("Ingrese un entero\n");
    scanf("%d",&n1);
    printf("Ingrese un entero\n");
    scanf("%d",&n2);
    if(n2 != 0) {
        div = (float)n1/n2;
        printf("%d/%d=%.2lf\n",n1,n2,div);
    }
    else  {
        printf("No se puede reaizar la division con dividendo igual a cero\n");
    }
    


}