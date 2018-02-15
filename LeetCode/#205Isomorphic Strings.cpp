#include <iostream>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char mapS[128] = {0};
        char mapT[128] = {0};
        int len = s.length();
        for (int i = 0; i < len; i++) {
            if(mapS[s[i]] != mapT[t[i]])
                return false;
            mapS[s[i]] = i + 1;
            mapT[t[i]] = i + 1;
        }
        return true;
        
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    cout << s.isIsomorphic("agg", "egg") << endl;
    return 0;
}
