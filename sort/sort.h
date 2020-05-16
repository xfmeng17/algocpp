#ifndef _SORT_H_
#define _SORT_H_

#include "common.h"

int quicksort(vector<int>& arr, int p, int q);
int mergesort(int* arr, int lo, int hi);
int insertsort(vector<int>& arr);
int findkth(vector<int>& arr, int p, int q, int k);

#endif  //  _SORT_H_