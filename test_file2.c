#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

int main(){

    pid_t pid1 = 18382;
    pid_t pid2 = 19338;

    int tym = 5;
    int a, b, c;


    printf("Delaying the process with PID: %d, by %d milliseconds \n", pid1, tym);
    a = syscall(449, pid1, tym);

    if(a<0){
        printf("Failed to\n");
    }

    b = syscall(450, pid1);
    if(b<0){
        printf("Failed to dispay delay of process 1\n");
    }
    

    c = syscall(450, pid2);
    if(c<0){
        printf("Failed to dispay delay of process 2\n");
    }


    printf("Done\n");
}