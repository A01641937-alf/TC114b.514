#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
    int pid = fork();

    if(pid == 0){
        printf("Soy el proceso Hijo\n");
        execl("/workspace/TC114b.514/hola.exe","hola.exe",NULL);
        sleep(5);
        printf("nunca nunca nunca");
    } else {
        printf("Soy el proceso Padre\n");
        wait(NULL);
    }
    return 0;
}
