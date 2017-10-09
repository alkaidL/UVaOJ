#include <iostream>
#include <cctype>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

map<string, int> repeatNum;
vector<string> word;

string standard(const string &s)
{
    string ans = s;
    for(int i = 0; i < ans.length(); i++)
        ans[i] = tolower(ans[i]);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s;
    while(cin >> s)
    {
        if(s == "#")
            break;
        word.push_back(s);
        string r = standard(s);
        if(!repeatNum.count(r))
            repeatNum[r] = 0;
        repeatNum[r]++;
    }
    vector<string> ans;
    for(int i = 0; i < word.size(); i++)
        if(repeatNum[standard(word[i])] == 1)
            ans.push_back(word[i]);
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}
