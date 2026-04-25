#include <stdio.h>   //incluimos la libreria de estandar input/output
#include <unistd.h>  //para hacer sleep
#include <time.h>    //para inicializar el tiempo
#include <pthread.h> //threads: declarar, ejecutar

void *calculo_aritmetico(void *arg)
{
    int contador = 0;
    while (contador < 2147483647)
    {
        contador = contador + 1;
    }
    return NULL;
}

int main()
{
    pthread_t threads[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("main() : creando thread %d \n", i);

        pthread_create(&threads[i], NULL, calculo_aritmetico, NULL);
    }

    int j;
    for (j = 0; j < 5; j++)
    {
        pthread_join(threads[j], NULL);
    }

    printf("Proceso principal: Fin \n");
    return 0;
}
// para compilar: gcc calculo_aritmetico.c -o ejecutable
// para ejecutar: ./ejecutable

// real    0m19.827s PRIMERA VERSION

// real    0m3.786s SEGUNDA VERSION (con 5 hilos)