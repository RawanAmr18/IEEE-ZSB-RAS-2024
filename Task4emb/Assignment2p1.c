#include <stdio.h>
#include <string.h>
struct Date{
  int day;
  int month;
  int year;
};
int comparedates(struct Date dt1 ,struct Date dt2){
  if(dt1.day != dt2.day || dt1.month != dt2.month || dt1.year != dt2.year){
    printf("Dates are not equal");
  }
  else{
    printf("Dates are equal");
  }
}
int main(void) {
  struct Date dt1 ,dt2;
  printf("Enter the first date (dd mm yyyy):");
  scanf("%d  %d  %d",&dt1.day,&dt1.month,&dt1.year);
  printf("\nEnter the second date (dd mm yyyy):");
  scanf("%d  %d  %d",&dt2.day,&dt2.month,&dt2.year);
  comparedates(dt1,dt2);
  return 0;
}