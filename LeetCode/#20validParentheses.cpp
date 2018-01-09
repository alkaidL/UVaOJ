#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 == 1)
            return false;

        const char* mirror = ")(                                                 ] [                             } {";

        stack<char> sta;
        sta.push(s[0]);
        for(int i = 1; i < s.length(); i++)
        {
            if( !sta.empty() && s[i] == mirror[sta.top() -'('] )
            {
                sta.pop();
            }
            else
                sta.push(s[i]);
        }
        if(sta.empty())
            return true;
        else
            return false;
    }
};

int main()
{
    Solution s;
    cout << s.isValid("[");

    return 0;
}
