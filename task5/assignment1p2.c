#include <stdio.h>
typedef struct{
  int real;
  int img;
}complex;
void addingcomplex(complex x,complex y){
  complex add;
  add.real=x.real+y.real;
  add.img=x.img+y.img;
  printf("The sum of the complex numbers is %d + %di",add.real,add.img);
}
int main(void) {
  complex x,y;
  printf("enter the real part of your first number:");
  scanf("%d",&x.real);
  printf("enter the imaginary part of your first number:");
  scanf("%d",&x.img);
  printf("enter the real part of your second number:");
  scanf("%d",&y.real);
  printf("enter the imaginary part of your second number:");
  scanf("%d",&y.img);
  addingcomplex(x,y); 
  return 0;
}