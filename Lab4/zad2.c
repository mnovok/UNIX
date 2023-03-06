#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

  int pid1, pid2;
  
  pid1 = fork();
  if(pid1 < 0) //greska
    {
      perror("fork");
      return 1;
    }
   else if (pid1 > 0) //parent
   {
      wait(2);
      printf("P1 PID: %d\t PPID: %d\t UID: %d\t USER: %s\n", getpid(), getppid(), getuid(), getlogin());           
   } 
   else //child
   {
     printf("C1 PID: %d\t PPID: %d\t UID: %d\t USER: %s\n", getpid(), getppid(), getuid(), getlogin());         
   }
   
   pid2 = fork();
   
   if(pid2 < 0)
   {
    perror("fork");
    return 2;
   } 
   
   else if(pid2 > 0)
   {
    printf("P2 PID: %d\t PPID: %d\t UID: %d\t USER: %s\n", getpid(), getppid(), getuid(), getlogin());
   }
    
   else
   {
    sleep(3);
    printf("C2 PID: %d\t PPID: %d\t UID: %d\t USER: %s\n", getpid(), getppid(), getuid(), getlogin());
    _exit(3);
   }

  return 0;


}