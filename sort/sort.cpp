#include "sort.h"

int main() {
  vector<int> arr = {6, 10, 13, 5, 8, 3, 2, 11};
  int ret = 0;
  // ret = quicksort(arr, 0, 8 - 1);
  // ret = insertsort(arr);
  for (int i = 0; i < 8; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int k = 5;
  ret = findkth(arr, 0, 8-1, k);
  cout << "findkth ret=" << ret << endl;

  return 0;
}
