#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hayLen = haystack.length(), needleLen = needle.length();
        if(needleLen == 0)
            return 0;
        if(needleLen > hayLen)
            return -1;
        for(int i = 0; i < hayLen-needleLen+1; i++)
        {
            string curStr = haystack.substr(i, needleLen);
            if(needle == curStr)
                return i;
        }
        return -1;
    }
};

int main()
{
    Solution s;
    cout << s.strStr("aaabaa", "ba");
    return 0;
}

//更快解法使用了C的思路
