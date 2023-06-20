#include <stdio.h>
#include "Operaciones.h"

int main (void){
    float n1, n2;
    float suma, resta, multiplicasion, division, Sum;
    float arreglo[5];
    int tamanio;
    printf ("Escoja cual quier numero:\n");
    scanf("%f", &n1);
    printf("Escoja otro numero:\n");
    scanf("%f", &n2);
    for (int i = 0; i < 5; i++)
    {
        printf("Coloque un numero:\n");
        scanf("%f", &arreglo[i]);
    }
    tamanio = sizeof(arreglo) / sizeof(arreglo[0]);
    Suma (&n1, &n2, &suma);
    Resta(&n1, &n2, &resta);
    Multiplicacion(&n1, &n2, &multiplicasion);
    Division (&n1, &n2, &division);
    arregloSuma(arreglo, &tamanio, &Sum);
    printf("La respuesta de la suma es de %f\n", suma);
    printf("La respuesta de la resta es de %f\n", resta);
    printf("La respuesta de la multiplicacion es de %f\n", multiplicasion);
    printf("La respuesta de la division es de %f\n", division);
    
}