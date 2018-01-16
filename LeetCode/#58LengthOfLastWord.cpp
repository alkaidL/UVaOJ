#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length(), count = 0, curIndex = len-1;
        for(curIndex = len-1; curIndex >= 0; curIndex--)
        {
            if(s[curIndex] != ' ')
                break;
        }
        while(curIndex+1 && s[curIndex--] != ' ')
            count++;
        return count;
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLastWord("   sfnh abj  ") << endl;
    return 0;
}

