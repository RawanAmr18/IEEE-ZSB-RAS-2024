//Assignment 2
#include <stdio.h>
#define add(x,y) x+y
#define sub(x,y) x-y
#define multi(x,y) x*y
#define division(x,y) x/y
#define operation(x, y, op) { \
    float result; \
    switch (op) { \
        case 1: \
            result = add(x, y); \
            printf("The result is: %f\n", result); \
            break; \
        case 2: \
            result = sub(x, y); \
            printf("The result is: %f\n", result); \
            break; \
        case 3: \
            result = multi(x, y); \
            printf("The result is: %f\n", result); \
            break; \
        case 4: \
            result = division(x, y); \
            printf("The result is: %f\n", result); \
            break; \
        default: \
            printf("Try Another Operation\n"); \
            break; \
    } \
}

int main(void) {
  float x, y, result;
  int op;
  #ifdef operation
  do{
      printf("choose:\n 0-exit\n 1-add\n 2-subtract\n 3-multiply\n 4-divide\n enter your choice:");
    scanf( "%d", &op);
    if(op!=(0)){
      printf("Enter the first number X:");
      scanf("%f",&x);
      printf("Enter the second number Y:");
      scanf("%f",&y);
      operation(x, y, op);
    }
  }while(op!=0);
  #endif
  return 0;
}
// Normal If-Else Statements:
// (Used within the code logic,Evaluated at runtime)
// And it is used to preform the operations based on specific condition.
// Preprocessor Directives (#if, #elif, #else):
// Processed by the preprocessor before compilation.
// #if is used when the macro function became true 
// example:
// #define active 1
// #define another 1
// #if active
// (do a certain command)
// #else another
// we use to activate another function to do a certain command
// summary: they determine which blocks of code are included in the compilation process.
