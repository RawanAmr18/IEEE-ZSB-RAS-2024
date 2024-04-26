#include <stdio.h>
enum operation {
  add = '+',
  sub = '-',
  multi = '*',
  divi = '/'
};

float calculator(float operand1, float operand2, enum operation op) {
  float result;
  switch(op) {
    case add:
      result = operand1 + operand2;
      break;
    case sub:
      result = operand1 - operand2;
      break;
    case multi:
      result = operand1 * operand2;
      break;
    case divi:
      result = operand1 / operand2;
      break;
  }
  return result;
}

int main(void) {
  float operand1, operand2, result;
  enum operation op;

  printf("Enter first number:\n");
  scanf("%f", &operand1);
  printf("Enter second number:\n");
  scanf("%f", &operand2);
  printf("Enter operation character (+, -, *, /):\n");
  scanf(" %s", &op);

  result = calculator(operand1, operand2, op);
  printf("Result: %f\n", result);
  printf("The size of enum = %lu bytes\n", sizeof(enum operation));

  return 0;
}
