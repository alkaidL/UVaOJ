#include <iostream>
#include <string>
using namespace std;

const int maxn = 100;
string trans(string s)
{
    string cur;
    for(unsigned int i = 0; i < s.length(); i++)
    {
        int count = 1;
        while(s[i] == s[i+1] && i != s.length()-1)
        {
            count++;
            i++;
        }
        cur += to_string(count) + s[i];
    }
    return cur;
}

class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        while(--n)
            s = trans(s);
        return s;
    }
};

int main()
{
    Solution s;
    cout << s.countAndSay(2);
    return 0;
}
