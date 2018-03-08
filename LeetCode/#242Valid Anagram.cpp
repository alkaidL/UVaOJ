#include <iostream>
using namespace std;

class Solution {
public:
    string sortWord(const string &s)
    {
        string ans = s;
        sort(ans.begin(), ans.end());
        return ans;
    }
    
    bool isAnagram(string s, string t) {
        return sortWord(s) == sortWord(t);
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    cout << s.isAnagram("anagram", "namraga") << endl;
    return 0;
}
