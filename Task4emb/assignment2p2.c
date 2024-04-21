#include <stdio.h>
#include <string.h>
struct info{
char name[10];
int age;
};
int main(void) {
  struct info y;
  struct info *p; 
  p =&y;
  printf("Enter your name: \n");
  scanf("%s",y.name);
  printf("Enter your age: \n");
  scanf("%d",&y.age);
  printf("Name: %s\n",p->name);
  printf("Age: %d\n",p->age);  
  return 0;
}