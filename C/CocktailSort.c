#include <stdio.h>

void swap(int* a, int* b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

void cocktailsort(int array[], int n) {
  int swap_status = 1;
  int start = 0, end = n - 1;

  while(swap_status == 1) {
    swap_status = 0;

    for(int i = start; i < end; i++) {
      if(array[i] > array[i+1]) {
        swap(&array[i], &array[i+1]);
        swap_status = 1;
      }
    }

    if(swap_status == 0) {
      break;
    }

    swap_status = 0;

    end -= 1;

    for(int i = end - 1; i >= start; i--) {
      if(array[i] > array[i+1]) {
        swap(&array[i], &array[i+1]);
        swap_status = 1;
      }
    }

    start += 1;
  }
}

void Display(int array[], int n) {
  for(int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {1, 5, 3, 7, 3, 7, 2, 5, 3, 56, 46};
  int n = sizeof(arr) / sizeof(arr[0]);
  Display(arr, n);
  cocktailsort(arr, n);
  Display(arr, n);

  return 0;
}
