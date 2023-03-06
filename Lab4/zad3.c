#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){

  //P1
  if( fork() > 0 )//parent P1
  {wait(NULL);
  sleep(1);
  printf("P1: %d\t %d\n", getpid(), getppid()); } else
   { } //child P2
  
  if( fork() > 0){exit(0); } //parent P2
    else //child P3
    {
    sleep(1);
    printf("P3: %d\t %d\n", getpid(), getppid());
    }

  return 0;
}