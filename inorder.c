#include <stdio.h>

int main(void) {
  int a[] = {5,8,3,6,2,5,9,6,7};
  int temp;
  for(int i  = 0; i < sizeof(a)/sizeof(int); i++) {
    for(int j = i; j < sizeof(a)/sizeof(int); j++) {
      if(a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for(int i = 0; i < sizeof(a)/sizeof(int); i++) {
    printf("%d ", a[i]);
  }
}
