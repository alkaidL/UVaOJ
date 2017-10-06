//先熟悉一下set的用法
/*
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> s;
    s.insert("begin");
    s.insert("alpha");
    s.insert("cat");
    s.insert("zip");
    cout << "set中的元素个数为" << s.size() << endl;
    cout << "set中的元素最大个数为" << s.max_size() << endl;
    cout << "set中的第一个元素为" << *s.begin() << endl;
    cout << "set中的最后一个元素为" << *--s.end() << endl;
    s.clear();
    if(s.empty())
    {
        cout << "set为空" <<endl;
    }
    cout << "set中的元素个数为" << s.size() << endl;
    cout << "set中的元素最大个数为" << s.max_size() << endl;
    return 0;
}
*/

#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;
set<string> dict;
int main()
{
    string s, buf;
    while(cin >> s)
    {
        for(unsigned int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = ' ';
        }
        stringstream ss(s);
        while(ss >> buf)
            dict.insert(buf);
    }
    for(set<string>::iterator it = dict.begin(); it != dict.end(); it++)
        cout << *it <<endl;
}
