#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#define ALL(x) x.begin(), x.end()
#define INS(x) inserter(x, x.begin())
using namespace std;
typedef set<int> Set;
map<Set, int> IDcache;      //把Set集合映射成ID
vector<Set> setCache;       //根据ID取Set集合

int findID(Set x)        //找到给定集合x的ID，找不到则分配一个新ID
{
    if(IDcache.count(x))
        return IDcache[x];
    setCache.push_back(x);
    return IDcache[x] = setCache.size() - 1;
}
int main()
{
    int n, numCmd;
    cin >> n;
    while(n--)
    {
        stack<int> s;
        string cmd;
        cin >> numCmd;
        while(numCmd--)
        {
            cin >> cmd;
            if(cmd[0] == 'P')
                s.push(findID(Set()));
            else if(cmd[0] == 'D')
                s.push(s.top());
            else                        //取栈顶两个元素
            {
                Set top1 = setCache[s.top()];
                s.pop();
                Set top2 = setCache[s.top()];
                s.pop();
                Set newTop;
                if(cmd[0] == 'U')
                    set_union(ALL(top1), ALL(top2), INS(newTop));           //set_union和intersection都由<algorithm>头文件引入
                if(cmd[0] == 'I')
                    set_intersection(ALL(top1), ALL(top2), INS(newTop));
                if(cmd[0] == 'A')
                {
                    newTop = top2;
                    newTop.insert(findID(top1));
                }
                s.push(findID(newTop));
            }
            cout << setCache[s.top()].size() << endl;
        }
        cout << "***" << endl;
    }
    return 0;
}
