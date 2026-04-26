// Ejercicio 1
// Escribir un programa en C donde el proceso padre crea tres hijos con tres llamadas a fork(). Solo el tercer
// hijo debe imprimir su PID.

int main (){
    pid_t pid;

    for(int i= 0; i < 3; i++){
        pid = fork()
        
        if(pid == 0) {
            if (i == 2){
                printf("soy el hijo 3 y este es mi PID %d:", getpid())
            }
            exit(0)
        }
    }

    wait(null)
    wait(null)
    wait(null)
}

