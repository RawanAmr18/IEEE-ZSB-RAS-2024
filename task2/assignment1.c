#include <stdio.h>
#include <string.h>
int main(){
    int x=1;
    char y= 'm';
    long long z=457575854;
    int *p1;
    char *p2;
    long long *p3;
    p1=&x;
    p2=&y;
    p3=&z;
    printf("Before:\n");
    printf("Adress=%p\n",p1);
    printf("Adress=%p\n",p2);
    printf("Adress=%p\n",p3);

    p1++;
    p2++;
    p3++;

    printf("After:\n");
    printf("Adress=%p\n",p1);//it will 4bytes because pointer refers to intger
    printf("Adress=%p\n",p2);//it will 1bytes because pointer refers to character
    printf("Adress=%p\n",p3);//it will 8bytes because pointer refers to long long
    return 0;
}