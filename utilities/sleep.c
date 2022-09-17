#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc < 2){
    printf("Error: no arguments");
  }else{
    int sec = atoi(argv[1]);
  printf("(nothing happens for a little while)");
  sleep(sec);
}
  exit(0);
}