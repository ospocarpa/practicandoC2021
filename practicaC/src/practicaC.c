#include "practicaC.h"


int main(){
    // t_log* logger = log_create("./cfg/practicaC.log", "PRACTICAC", true, LOG_LEVEL_INFO);
    // log_info(logger, "Soy una practicaC! %s", mi_funcion_compartida());
    // log_destroy(logger);
    
    
    char nombre[] = "Oscar Hinojosa";
    int edad = 26;
    double altura =1.73;
    printf("Mi nombre es %s tengo %d anios y mido %.2lf metros\n",nombre,edad,altura);


}