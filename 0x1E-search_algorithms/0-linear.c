#include <stdio.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value);

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  size_t size = sizeof(array) / sizeof(array[0]);
  int value = 6;
  int index = linear_search(array, size, value);
  if (index != -1) {
    printf("Value found at index %d\n", index);
  } else {
    printf("Value not found\n");
  }
  return 0;
}

int linear_search(int *array, size_t size, int value) {
  if (array == NULL) {
    return -1;
  }
  for (size_t i = 0; i < size; i++) {
    printf("Comparing %d to %d\n", array[i], value);
    if (array[i] == value) {
      return i;
    }
  }
  return -1;
}
