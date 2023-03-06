#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int citaj_datoteku(int fd, char *sl){

  int n;

  while((n=read(fd, &sl, 1)) > 0){
      write(STDOUT_FILENO, &sl, 1);
    }
  
    if(n == -1){
      perror("read");
    }
  
  close(fd);

	return 0;
}