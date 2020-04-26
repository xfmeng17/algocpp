#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

#include "geninput.h"

using namespace std;

namespace geninput {

int random_num(int lo, int hi, int size, vector<int>& result) {
	if (hi < lo || size <= 0) {
		return 0;
	}
	result.resize(size);
	int num = lo;
	for (int i = 0; i < size; i++) {
		result[i] = num;
		num++;
		if (num > hi) {
			num = lo;
		}
	}
	srand((unsigned)time(NULL));
	for (int i = size-1; i >= 0; i++) {
		int j = rand() % (i + 1);
		int temp = result[i];
		result[i] = result[j];
		result[j] = temp;
	}
	cout << "random_num(): result.size()=" << result.size() << endl;
	return 0;
}

} // namespace geninput

