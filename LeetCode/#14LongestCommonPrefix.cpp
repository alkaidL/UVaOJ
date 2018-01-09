#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";

        string ans = strs[0];

        for(int i = 1; i < strs.size(); i++)
        {
            string current = strs[i];
            string temp = ans;
            ans = "";
            for(int j = 0; j < min(current.length(), temp.length()); j++)
            {
                if(current[j] == temp[j])
                    ans += current[j];
                else
                    break;
            }
        }
        return ans;
    }
};

int main()
{
    vector<string> vs;
    vs.push_back("sadfsad");
    vs.push_back("sadfddddfdd");
    vs.push_back("sadfsd");
    vs.push_back("sadfs243d");
    vs.push_back("sadfsddd");
    Solution s;
    cout << s.longestCommonPrefix(vs);
    return 0;
}
