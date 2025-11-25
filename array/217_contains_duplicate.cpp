// 217. Contains Duplicate
// https://leetcode.com/problems/contains-duplicate/
// easy


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> tracks = nums;

        // use hash set
        unordered_set<int> hset;

        // traverse the array to check if duplicate
        for(int num: nums) {
            if(hset.count(num))
                return true;

            hset.insert(num);
        }

        return false;
    }
};

