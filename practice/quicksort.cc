#include <iostream>
#include <vector>

using namespace std;

void swap(int& source, int& target) {
    int tmp = source;
    source = target;
    target = tmp;
}

int partition(vector<int>& arr, int start, int end) {
    int idx=0;

    int pivot = arr[start];

    while(start <= end) {
        if(arr[start] < pivot) {

            start++;
        }

        else if(arr[end] > pivot) {
            end--;
        }
    }

    if(start > end) {

    }

    return idx;
}

void quicksort(vector<int>& arr, int start, int end, int arr_size) {

}

int main() {
    vector<int> arr = {80, 10, 20, 50, 40, 60, 30, 70};
    quicksort(arr, 0, (int)arr.size()-1, (int)arr.size());
}
