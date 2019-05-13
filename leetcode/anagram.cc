/* https://leetcode.com/problems/group-anagrams/ */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        for(int i=0; i!=strs.size(); i++) {
            for(int j=0; j!=strs[i].length(); j++) {
                const char *str = strs[j].c_str();
                int idx = str[j] - 'a';

            }
        }

        return ans;
    }
};

int main() {
    vector<string> inputs;
    int num;
    cin >> num;

    for(int i=0; i!=num; i++) {
        string val;
        cin >> val;
        inputs.push_back(val);
    }

    auto* s = new Solution();
    s->groupAnagrams(inputs);

    return 0;
}