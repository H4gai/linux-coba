#include <stdlib.h>     /* exit() */
#include <unistd.h>     /* getpid() */
#include <stdio.h>      /* printf() */
#include <unistd.h>     /* sleep() */

int main(int argc, char **argv) {
 printf("process ID saya:  %d\n", getpid());
 sleep(200);
 exit(0);
}
