\void main(){
    int id = fork();
    printf("%d", id);

    if(id >0){
        int id2= fork();
        printf("hola");
    }
    printf("chau")
}