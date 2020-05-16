#include "sort.h"

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
	return;
}


int quicksort(vector<int>& arr, int p, int q) {
  if (p >= q) {
    return 0;
  }
  int i = p;
  int j = i + 1;
  for (; j <= q; j++) {
    if (arr[j] <= arr[p]) {
      i++;
	  swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[p], &arr[i]);
  quicksort(arr, p, i-1);
  quicksort(arr, i+1, q);
  return 0;
}
