#include <stdio.h>
#include "calcular.h"

int main (void){
    float arreglo[5];
    float arreglo2[5];
    int tamaneo=5, com;
    float suma[5];
    char cadena[20], cadena2[20];

    for (int i = 0; i < 5; i++){
        printf("Coloque el numero %i:\n", i+1);
        scanf("%f", &arreglo[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("Coloque otro numero %i:\n", i+1);
        scanf("%f", &arreglo2[i]);
    }

    printf("Cloque cualquier cualquir plabra aqui:\n");
    scanf("%s", &cadena[20]);
    printf("Cloque cualquier cualquir plabra aqui:\n");
    scanf("%s", &cadena2[20]);

    SumaArreglo (arreglo, arreglo2, &tamaneo, suma);
    Cadenacom(cadena, cadena2, &com);
    
    for (int i = 0; i < tamaneo; i++){
        printf("La respuesta de las sumas para el numero %d es de %f \n", i+1, suma[i]);
    }
    
    if (com == 0){
        printf("Las dos cadenas son igual.\n");
    }else{
        printf("Las dos cadenas no son igual.\n");
    }
    
}