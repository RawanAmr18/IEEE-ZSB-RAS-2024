#include <stdio.h>
#define add(x, y, result) \
result = x + y\

#define sub(x, y, result) \
result = x - y\

int main(void) {
    int x, y, result;
    printf("Enter your first number:");
    scanf("%d", &x);
    printf("Enter your second number:");
    scanf("%d", &y);

#ifdef add
    add(x, y, result);
    printf("The sum of the two numbers = %d\n", result);
#endif

#ifdef sub
    sub(x, y, result);
    printf("The difference of the two numbers = %d\n", result);
#endif

    return 0;
}
