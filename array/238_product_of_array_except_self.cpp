#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;

        int prefix = 1;
        for(int i = 0; i < nums.size(); i++) {
            output.push_back(prefix);

            prefix *= nums[i];
        }

        int postfix = 1;
        for(int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= postfix;

            postfix *= nums[i];
        }

        return output;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    vector<int> vec = {1, 2, 3, 4};

    vector<int> res = sol.productExceptSelf(vec);

    for(auto r : res) {
        cout << r << endl;
    }

    return 0;
}
