#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "zad4_fja.h"

int main(int argc, char *argv[]) {
  int fd1, n;
  char sl, c;
  int i;
  
  if(argc < 2){
    
  while(read(STDIN_FILENO, &c, 1)>0)
    write(STDOUT_FILENO, &c, 1);
  }
  
  for(i = 1; i < argc; i++){
    fd1 = open(argv[i], O_RDONLY);
    if(fd1 < 0){
      perror("open");
      exit(-1);
    }
    
    citaj_datoteku(fd1, &sl);
  
  }
  
  exit(0);
  
}  


