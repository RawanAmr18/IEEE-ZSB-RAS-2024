#include <stdio.h>

struct student_info {
    int roll;
    char name[30];
    int age;
    char address[70];
    float marks;
};

void information(struct student_info s[15]) {
    int j = 0; 
    for(int i = 1; i <= 15; i++) {
      printf("\nEnter information for student %d: \n", i);
      printf("\nEnter roll number: ");
      scanf("%d", &s[i].roll);
      printf("\nEnter your name: ");
      scanf("%s", s[i].name); 
      printf("\nEnter your age: ");
      scanf("%d", &s[i].age);
      printf("\nEnter your address: ");
      scanf(" %s", s[i].address); 
      printf("\nEnter your marks: ");
      scanf("%f", &s[i].marks);

        if (s[i].marks < 12) {
            j++; 
        }
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
    printf("\nNumber of students with marks under 12: %d\n", j);
}

int main(void) {
    struct student_info s[15];
    information(s);
    return 0;
}