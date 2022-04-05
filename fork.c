#include <stdlib.h>     /* exit() */
#include <unistd.h>     /* fork() and getpid() */
#include <stdio.h>      /* printf() */

int main(){

    fork();
    puts("hello");
    return 0;
} 
