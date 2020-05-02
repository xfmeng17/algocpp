#include "common.h"
#include "insertsort.h"

int insertsort(vector<int>& arr) {
	for (int i = 0; i < arr.size(); i++) {
		int n = arr[i];
		int j = i-1;
		while (j >= 0 && arr[j] > n) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = n;
	}
	return 0;
}
