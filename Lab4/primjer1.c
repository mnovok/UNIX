#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

  int pid;
  
  pid = fork();
  if(pid < 0) //greska
    {
      perror("fork");
      return 1;
    }
   else if (pid > 0) //parent
   {
      printf("PID: %d\t PPID: %d\t UID: %d\t USER: %s\n", getpid(), getppuid(), getuid(), getlogin());           
   } 
   else //child
   {
     printf("PID: %d\t PPID: %d\t UID: %d\t USER: %s\n", getpid(), getppid(), getuid(), getlogin()):
   }
    

  return 0;


}