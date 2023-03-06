#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <signal.h>

#define PRAVA S_IRUSR | S_IWUSR | S_IRGRP

int exit_flag = 1;
int status;

void sig_child(int signo){
 if(signo == SIGCHLD){
  int pid;
  pid = wait(&status);
  printf("Primljen signal SIGCHILD\n");
  fflush(stdout);
  exit_flag = 0;
  }
}

int main(int argc, char **argv){

  int fd, pid, cpid;

  if(argc < 3){
    printf("koristenje %s [datoteka] [naredba] <argumenti>\n", argv[0]);
    return 0;
  }
    
  //fd = open(argv[1], O_WRONLY | O_TRUN | O_CREAT
  fd = creat(argv[1], PRAVA );
  if(fd < 0)
  {
    perror("open");
    return 1;
  }
  
  signal(SIGCHLD, sig_child);
  
  pid = fork();
   if(pid < 0){
     perror("fork");
     return 2;
   }
   
   else if(pid > 0){ //parent 
     while(exit_flag)
       pause();
     printf("Izlazni status djeteta je %d\n", WEXITSTATUS(status));
     printf("PID:%d  PPID:%d\n", getpid(), getppid());            
   }
   
   else{ //child
     sleep(1);
 
  
  dup2(fd, STDOUT_FILENO);
  
  if(fd != STDOUT_FILENO)
  {
    close(fd);
  }
  
  execvp(argv[2], &argv[2]);
  perror("execvp");
  return 123;
}
  return 0;
}
