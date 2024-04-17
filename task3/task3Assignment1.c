#include <stdio.h>
float add(float x, float y){
  return x + y;
}
float sub(float x, float y){
  return x - y;
}
float multi(float x, float y){
  return x * y;
}
float division(float x, float y){
  return x / y;
}
void operation(float *x,float *y,float *result,int *op){
  printf("Enter the first number X:");
  scanf("%f",x);
  printf("Enter the second number Y:");
  scanf("%f",y);
  switch(*op){
    case 1:
      *result = add(*x, *y);
      printf("The result is: %f\n",*result);
      break;
    case 2:
      *result = sub(*x, *y);
      printf("The result is: %f\n",*result);
      break;
    case 3:
      *result = multi(*x, *y);
      printf("The result is: %f\n",*result);
      break;
    case 4:
      *result = division(*x, *y);
      printf("The result is: %f\n",*result);
      break;
    default:
      printf("Try Another Operation\n");
      break;
  }
  
}
int main(void) {
  float x, y, result;
  int op;
  do{
      printf("choose:\n 0-exit\n 1-add\n 2-subtract\n 3-multiply\n 4-divide\n enter your choice:");
      scanf( "%d", &op);
    if(op!=0){
      operation(&x, &y,&result,&op);
    }

  }while(op!=0);
  return 0;
}