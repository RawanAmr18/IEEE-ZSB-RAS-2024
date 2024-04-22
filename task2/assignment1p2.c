#include <stdio.h>
int main(void) {
  int x=0xFAFA;
  int *ptr;
  ptr = &x;
  printf("%X\n", *ptr++);//the output here willbe FAFA becuase the pointer is printed first then it is incremented so it means to move pointer ptr to point to the next memory location next byte
  ptr = &x; //reset the value
  printf("%X\n", *++ptr);// it increments the pointer ptr and prints the value stored in the memory location after x, which is garbage value.
  ptr = &x;
  printf("%X\n", ++*ptr);// means to let p value increase 1 because it is incremented first then it is printed.
  return 0;
}
