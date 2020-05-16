#include "sort.h"

int partition(vector<int>& arr, int p, int q) {
	if (p > q) {
		return -1;
	}
	if (p == q) {
		return p;
	}

	int i = p;
	int j = p + 1;
	for (; j <= q; j++) {
		if (arr[j] < arr[i]) {
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	int temp = arr[i];
	arr[i] = arr[p];
	arr[p] = temp;
	return i;
}

int findkth(vector<int>& arr, int p, int q, int k) {
	cout << "k=" << k << endl;
	if (k < 0 || k >= q-p+1) {
		return -1;
	}
	int idx = partition(arr, p, q);
	cout << "idx=" << idx << endl;

	if (idx-p == k) {
		return arr[idx];
	}
	if (idx-p < k) {
		int cut = idx - p + 1;
		return findkth(arr, idx+1, q, k - cut);
	}
	if (idx-p > k) {
		return findkth(arr, p, idx - 1, k);
	}

	return -1;
}

