#include <stdio.h>
#include <string.h>
struct test{
  int ID;
  char name[30];
  char class_id[20];
};
struct test_change {
    char name[30];
    int id;
    char class_id[20];
};
int main(void) {
  struct test x;
  printf("Size of struct before rearranging : %lu bytes\n", sizeof(x));
  printf("Size of struct after rearranging: %lu bytes\n", sizeof(struct test_change));
  return 0;
}
// there is no difference because there is something called padding the compiler insert padding bytes between
// the members to insure proper alignment which helps optimize memory access in this case 
// the padding will be added between name and class_id BUT the int id requires 4byte so there is no
// for additional padding so the size will be the same (4+30+20=54)
