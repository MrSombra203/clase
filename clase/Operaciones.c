
void Suma (float* n1, float* n2, float* resulado){
    *resulado = *n1 + *n2;
}

void Resta(float* n1, float* n2, float* resulado){
    *resulado = *n1 - *n2;
}

void Multiplicacion(float* n1, float* n2, float* resulado){
    *resulado = *n1 * *n2;
}

void Division (float* n1, float* n2, float* resulado){
    *resulado = *n1 / *n2;
}

void arregloSuma (float arreglo, int* tamanio, float *resultado){
    for (int i = 0; i < tamanio; i++)
    {
        *resultado += arreglo[i];
        arreglo++;
    }
    
}


