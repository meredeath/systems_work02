#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned int x = 3000000000;
  char *c = &x;
  printf("%x %u\n",x,x);
  for(int i = 0;i<4;i++){
    printf("%hhx %u\n",*(c+i),*(c+i));
  }
  for(int i = 0;i<4;i++){
    printf("%hhx %u\n",*c,*c);
    *c+16;
  }
  return 0;
}
