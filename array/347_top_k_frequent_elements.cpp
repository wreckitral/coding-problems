#include <algorithm>
#include <unordered_map>
#include <utility>
#include <vector>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> map;

        for(int n : nums) {
            map[n]++;
        }

        std::vector<pair<int, int>> vec;

        for(auto n : map){
            vec.push_back(std::make_pair(n.second, n.first));
        }

        std::sort(vec.rbegin(), vec.rend());

        std::vector<int> res;

        for (int i = 0; i < k;i++) {
            res.push_back(vec[i].second);
        }

        return res;
    }
};
