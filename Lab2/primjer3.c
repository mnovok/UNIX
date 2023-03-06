
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int citaj_pisi(int fd1, int fd2)
{
  int n;
  char c;

  while((n = read(fd1, &c, 1)) > 0)
    write(fd2, &c, 1);
    
  if(n < 0)
  {
    perror("read");
  }
  
  return n;
}


int main(int argc, char *argv[]) {
 
  int fd, k;
  
  if(argc < 1)
  {
    perror("No command given");
    return 1;
  }
 
  for (k=1; k<argc; k++) {
    fd = open(argv[k], O_RDONLY);
    if (fd < 0) {
      perror("open");
      return -1;
    }
    
    else
      citaj_pisi(fd, STDOUT_FILENO);
      close(fd);
    
    
  }



  return 0;
}
