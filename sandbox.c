#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  int fd;
  char buf[30];
  
  if(argc != 2) {
    write(STDERR_FILENO, "ERR\n", 4);
    return 1;
  }
  
//   fd = open(argv[1], O_RDONLY);
  fd = open("test.txt", O_RDONLY);
//   read(fd, buf, 3);
//   write(STDOUT_FILENO, buf, 3);
//   write(STDOUT_FILENO, "\n", 1);
  
  lseek(fd, 2, SEEK_SET);
  read(fd, buf, 3);
  write(STDOUT_FILENO, buf, 3);
  write(STDOUT_FILENO, "\n", 1);
  
  return 0;
}