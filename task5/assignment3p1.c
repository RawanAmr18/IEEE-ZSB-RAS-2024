#include <stdio.h>
#define ascending(x,n,array) \
for(int i=0;i<n;i++)\
for(int j=i+1;j<n;j++){\
  if(array[i]>array[j]){\
   x=array[i];\
    array[i]=array[j];\
    array[j]=x;\
  }\
}\

#define descending(x,n,array) \
for(int i=0;i<n;i++)\
for(int j=i+1;j<n;j++){\
  if(array[i]<array[j]){\
   x=array[i];\
    array[i]=array[j];\
    array[j]=x;\
  }\
}\

int main(void) {
  int n;
  printf("Enter the length of your array:\n");
  scanf("%d", &n);
  int array[n];
  for(int i=0; i<n; i++){
    printf("Enter value for %d:\n", i+1);
    scanf("%d", &array[i]);
  }
  int x;
  #ifdef ascending
  ascending(x, n, array);
  printf("Sorted Array in ascending order:\n");
  #else 
    descending(x, n, array);
  printf("Sorted Array in descending order:\n");
  #endif
    for(int i=0; i<n; i++){
      printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}