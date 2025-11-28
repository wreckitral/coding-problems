#include <algorithm>
#include <unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> map;

        for(string s : strs) {
            string key = s; // copy the s to make key
            std::sort(key.begin(), key.end()); // sort data to make it key

            map[key].push_back(s);
        }

        vector<vector<string>> res;
        for (auto r : map) {
            res.push_back(r.second);
        }

        return res;
    }
};
