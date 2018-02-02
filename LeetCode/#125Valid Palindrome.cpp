#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string curStr;
        for(int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i])) {
                curStr += tolower(s[i]);
            }
        }
        int len = curStr.length() - 1, pos = len / 2;
        while(len >= pos)
        {
            if(curStr[pos] != curStr[len-pos])
                return false;
            pos++;
        }
        return true;
    }
};

int main(int argc, const char * argv[]) {
    string str = "race e car";
    Solution s;
    cout << s.isPalindrome(str) << endl;
    return 0;
}
