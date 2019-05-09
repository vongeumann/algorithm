#include <iostream>
#include <vector>
int main() {
    int answer=0, arr_size, x;
    std::cin >> arr_size;
    std::vector<int> arr;

    arr.push_back(0);
    for (int i = 0; i < arr_size; i++) {
        std::cin >> x;
        if (arr.back() < x) {
            arr.push_back(x);
            answer++;
        }
        else {
            auto it = lower_bound(arr.begin(), arr.end(), x);
            *it = x;
        }
    }

    std::cout << "answer : " << answer << std::endl;

    return 0;
}