// Ejercicio 2
// El proceso padre crea un hijo, espera con wait() a que termine, y recién entonces crea un segundo hijo.
// Cada hijo imprime en qué orden fue creado. El padre no imprime nada.

int main (){
    pid_t = pid;

    pid = fork()  // el padre crea el primer hijo
    if(pid==0){
        printf("fui creado primero y mi pid es %d:", getpid())
        exit(0)
    }
    wait(null)  // esperamos al primer hijo

    pid = fork() // el padre crea al segundo hijo
    if(pid==0){
        printf("fui creado segundo y mi pid es %d:", getpid())
        exit(0)
    }
    wait(null) // esperamos al segundo hijo

}