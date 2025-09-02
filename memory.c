#include <stdlib.h>

int main(void)
{
  int *x = malloc(3 + sizeof(int));
  x[0] = 72;
  x[1] = 73;
  x[2] = 73;
  free(x);
  //use valgrind so \valgrind .memory.c so it checks for memory issues
}
