#include <stdio.h>

int main()
{
    int numero1, numero2, resultado;
    long indice;

    // Esperamos que el usuario escriba
    printf("Introducir el primer numero: ");
    scanf("%d", &numero1);

    printf("Introducir el segundo numero: ");
    scanf("%d", &numero2);

    // Hacemos las operaciones
    for (indice = 0; indice < 20000000000; indice++)
    {
        resultado = numero1 + numero2;
    }

    printf("Suma: %d\n", resultado);
    printf("Termina el proceso.\n");

    return 0;
}