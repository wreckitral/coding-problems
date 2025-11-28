#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // num, index
        std::unordered_map<int, int> seen;

        // traverse the array
        for(int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            // check if the pair is seen
            if(seen.count(need)) {
                return {seen[need], i};
            }

            seen[nums[i]] = i;
        }

        return {};
    }
};
