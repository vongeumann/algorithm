#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int start, int end, int pivot_idx) {
	int pivot = arr[pivot_idx];
	int idx = start;

	swap(arr[pivot_idx], arr[end]);
	for(int i=start; i!=end; i++) {
		if(arr[i] <= pivot) {
			swap(arr[i], arr[idx]);
			idx++;
		}
	}
	swap(arr[idx], arr[end]);
	return idx;
}

int quickselect(vector<int>& arr, int start, int end, int k) {
	if(start == end) return arr[start];
	int pivot_idx = (start + end) / 2;
	pivot_idx = partition(arr, start, end, pivot_idx);

	if(k == pivot_idx) return arr[k];

	if(pivot_idx > k) return quickselect(arr, start, pivot_idx-1, k);
	else return quickselect(arr, pivot_idx+1, end, k);
}

int main() {
	vector<int> arr{5, 1, 3, 4, 2};

	int k = 2;

	int result = quickselect(arr, 0, arr.size()-1, k-1);

	cout << result;

	return 0;
}