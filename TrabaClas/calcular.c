#include <stdio.h>
#include <string.h>

void SumaArreglo (float* arreglo, float* arreglo2, int* tamaneo, float* suma){
    for (int i = 0; i < *tamaneo; i++){
        *suma = *arreglo + *arreglo2;
        suma++;
        arreglo++;
        arreglo2++;
    }
}


void Cadenacom(char *cadena, char *cadena2, int *com){
    *com = strcmp(cadena, cadena2);  
}