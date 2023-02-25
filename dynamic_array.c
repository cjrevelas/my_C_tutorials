#include <stdio.h>
#include <stdlib.h>

int main() {
  int numberOfIntegers;

  printf("give the size of the array: ");
  scanf("%d", &numberOfIntegers);

  int* dynArray = (int*)malloc(sizeof(int)*numberOfIntegers); // memory allocation

  printf("\n give integers to be stored:");
  for (int ii=0; ii<numberOfIntegers; ++ii) {
    dynArray[ii] = (ii+1)*2;
  }

  for (int ii=0; ii<numberOfIntegers; ++ii) {
    printf("%d\n", dynArray[ii]);
  }

  printf("\n");
  return 0;
}
