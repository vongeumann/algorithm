#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    // O(n^2)
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int sum;

        for(int i=0; i!=nums.size(); i++) {
            for(int j=i+1; j!=nums.size(); j++) {
                sum = nums[i] + nums[j];
                if(sum == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }

        if(ans.empty())
            cout << "None of sums are match with target " << target << endl;

        return ans;
    }

    // O(n)
    vector<int> twoSumImproved(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> map_;
        int complement;

        for(int i=0; i!=nums.size(); i++) {
            map_.insert({nums[i], i});
        }

        for(int i=0; i!=nums.size(); i++) {
            complement = target - nums[i];
            auto it = map_.find(complement);
            if(it != map_.end() && it->second != i) {
                ans.push_back(i);
                ans.push_back(it->second);
                return ans;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums;
    vector<int> ans;
    int rot, target;
    int value;
    auto *s = new Solution();

    cin >> rot >> target;

    for(int i=0; i!=rot; i++) {
        cin >> value;
        nums.push_back(value);
    }

//    ans = s->twoSum(nums, target);
    ans = s->twoSumImproved(nums, target);

    cout << "--------------------" << endl;
    for(int i=0; i!=ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}