#include <stdio.h>
#include <iostream>

#include "mergesort.h"
#include "quicksort.h"

using namespace std;

int main() {
  vector<int> arr = {6, 10, 13, 5, 8, 3, 2, 11};
  int ret = quicksort(arr, 0, 8 - 1);
  for (int i = 0; i < 8; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
