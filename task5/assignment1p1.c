#include <stdio.h>
#include <string.h>

struct student_info{
  unsigned int roll:4;
  unsigned int age:8;
  unsigned int marks:3;
  char name[10];
  char address[20];
};

void information(struct student_info s[15]) {
    int j = 0; 
    for(int i = 1; i <= 15; i++) {
      printf("\nEnter information for student %d: \n", i);
      printf("\nEnter roll number: ");
      scanf("%u", s[i].roll);
      printf("\nEnter your name: ");
      scanf("%s", s[i].name); 
      printf("\nEnter your age: ");
      scanf("%u", s[i].age);
      printf("\nEnter your address: ");
      scanf(" %s", s[i].address); 
      printf("\nEnter your marks: ");
      scanf("%u", s[i].marks);
    }
    printf("\nStudent Information:\n");
    for(int i = 1; i <= 15; i++) {
      printf("\nInformation for student %d:\n", i);
      printf("Roll number: %d\n", s[i].roll);
      printf("Name: %s\n", s[i].name);
      printf("Age: %d\n", s[i].age);
      printf("Address: %s\n", s[i].address);
      printf("Marks: %f\n", s[i].marks);
    }
}
int main(void) {
  struct student_info s[15];
  information(s);
  printf("the size of struct=%lu\n",sizeof(struct student_info));
  return 0;
}