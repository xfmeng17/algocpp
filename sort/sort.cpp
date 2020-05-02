#include "common.h"
#include "mergesort.h"
#include "quicksort.h"
#include "insertsort.h"

int main() {
  vector<int> arr = {6, 10, 13, 5, 8, 3, 2, 11};
  // int ret = quicksort(arr, 0, 8 - 1);
  int ret = insertsort(arr);
  for (int i = 0; i < 8; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
