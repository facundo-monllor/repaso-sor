// Ejercicio 2
// El proceso padre crea un hijo, espera con wait() a que termine, y recién entonces crea un segundo hijo.
// Cada hijo imprime en qué orden fue creado. El padre no imprime nada.

int main() {
    pid_t pid

    pid = fork()
    if(pid == 0){
        printf("soy el primer hijo %d:", getpid())
        exit(0)
    }
    wait(null)

    pid = fork()
    if(pid == 0){
        printf("soy el segundo hijo %d:", getpid())
        exit(0)
    }
    wait(null)
    
}