#include <algorithm>
#include <unordered_map>

class Solution {
public:
    // this solved using sorted
    bool isAnagram_sort(string s, string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if(s == t) return true;

        return false;
    }

    // this is using hashmap
    bool isAnagram(string s, string t) {
        std::unordered_map<int, int> map;

        for(char c : s) {
            map[c]++;
        }

        for(char c : t) {
            map[c]--;
        }

        for(auto n : map) {
            if(n.second != 0) return false;
        }

        return true;
    }
};
