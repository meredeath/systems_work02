#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned int x = 3000000000;
  char *c = (char*)&x;

  printf("x in hex and dec: ");
  printf("%x %u\n\n",x,x);
  
  printf("each individual byte of x:\n");
  for(int i = 0; i < 4; i++){
    printf("%hhx %u\n",*c,*c);
    c++;
  }

  unsigned int x3 = 3000000000;
  char *c3 = (char*)&x3;
  printf("\neach byte of x incremented by 1:\n");
  for(int i = 0;i<4;i++){
    *c3 += 1;
    printf("%hhx %u\n",*c3,*c3);
    c3++;
  }
  printf("what x ends up being: ");
  printf("%d\n\n",x3);

  unsigned int x2 = 3000000000;
  char *c2 = (char*)&x2;
  printf("each byte of x incremented by 16:\n");
  for(int i = 0;i<4;i++){
    *c2 += 16;
    printf("%hhx %u\n",*c2,*c2);
    c2++;
  }
  printf("what x ends up being after getting incremented by 16:\n");
  printf("%d\n\n",x2);
  return 0;
}
