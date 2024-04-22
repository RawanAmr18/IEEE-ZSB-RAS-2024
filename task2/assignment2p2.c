#include <stdio.h>
int main(void) {
  int array[6] = {30,15,12,8,20,25};
  int *p=array;
  printf("Elements of the array:\n");
  for (int i = 0; i < 6; i++) {
    printf("%d ", *(p + i));
  }
  return 0;
}