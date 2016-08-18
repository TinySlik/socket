#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main() {  
    pid_t fpid;//fpid表示fork函数返回的值  
    //printf("fork!");  
    printf("fork!");  
    fpid = fork();  
    if (fpid < 0)  
        printf("/nerror in fork!");  
    else if (fpid == 0)  
        printf("I am the child process, my process id is %d", getpid());  
    else  
        printf("I am the parent process, my process id is %d", getpid());  
    return 0;  
}  
