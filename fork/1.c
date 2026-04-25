int main () {

    pid_t pid;

    int i;

    for(i= 0 ; i<3; i++){
        pid = fork();

        if(pid == 0){
            if(i == 2){
                print(getpid());
            }
            exit(0);
        }
    }

    wait(null);
    wait(null);
    wait(null);
}