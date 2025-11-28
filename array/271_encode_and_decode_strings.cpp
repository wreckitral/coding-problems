#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string encode(vector<string>& strs) {
        string ret = "";

        for(auto s : strs) {
            string delimiter = to_string(s.length());
            ret += delimiter + "#" + s;
        }

        return ret;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;

        while(i < (int) s.length()) {
            // 1. parse the length of the next string
            int j = i;

            while(s[j] != '#') { // loop until find delimiter
                j++;
            }

            // get the number before delimiter
            int len = stoi(s.substr(i, j - i)); // number before '#'
            j++; // skip '#'

            // 2. extract the exact string of that length
            string word = s.substr(j, len);
            res.push_back(word);


            // 3. move pointer forward
            i = j + len;
        }

        return res;
    }
};

int main() {
    Solution sol;
    std::vector<string> vec;

    vec.push_back("neet");
    vec.push_back("code");

    cout << sol.encode(vec) << endl;

    string encoded_string = sol.encode(vec);

    vector<string> res = sol.decode(encoded_string);

    for(auto r : res) {
        cout << r << endl;
    }
}
