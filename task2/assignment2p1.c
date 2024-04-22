#include <stdio.h>
void pass(int *p){
  int x;
  printf("entre number:");
  scanf("%d",&x);
  *p=x;
}
int main(void) {
  int a;
  pass(&a);
  printf("a=%d",a);
  return 0;
}