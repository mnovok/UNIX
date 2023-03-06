#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char **argv){
  
  int pid, cpid;
  int status;
    
  if(argc < 2)
  {
    printf("Koristenje %s [argumenti]:\n", argv[0]);
    return -1;
  }
  
  pid = fork();
  if(pid > 0)//P1
  {
    cpid = wait(&status);
    printf("C: %d\t\n", cpid);
    if(WIFEXITED(status))
    {
    printf("Izlazni status djeteta je %d\n", WEXITSTATUS(status)); //ako je ispravno unesena naredba vraca 0, inace ne!
    }
  }
  else { //child P2
  
  execvp(argv[1], &argv[1]);
  
  perror("execvp"); 

  return 1;
  }
  
  return 0;
}
