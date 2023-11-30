#include <stdio.h>

void sort_data(int *a, int n) {
  int temp;
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      if(a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main(void) {
  int a[] = {5,8,3,6,2,5,9,6,7};
  sort_data(&a, sizeof(a)/sizeof(int));
  for(int i = 0; i < sizeof(a)/sizeof(int); i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
