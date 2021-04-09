#include "practicaC.h"


int main(){
    // t_log* logger = log_create("./cfg/practicaC.log", "PRACTICAC", true, LOG_LEVEL_INFO);
    // log_info(logger, "Soy una practicaC! %s", mi_funcion_compartida());
    // log_destroy(logger);

    
    char nombre[20] ;
    int edad ;
    double altura ;
    printf("Ingrese su nombre\n");
    scanf("%s",nombre);
     printf("Ingrese su edad\n");
    scanf("%d",&edad);
     printf("Ingrese su altura\n");
    scanf("%lf",&altura);
    printf("Ud  es %s tiene %d anios y una altura de %.2lf metros\n",nombre,edad,altura);


}