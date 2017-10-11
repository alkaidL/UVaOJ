#include <iostream>
#include <queue>
#include <map>
using namespace std;
const int maxt = 1010;

int main()
{
    int n, kase = 1;
    while(cin >> n && n)
    {
        cout << "Scenario #" << kase++ << endl;
        map<int, int> team;         //找到编号为x的人对应的团队
        for(int i = 0; i < n; i++)
        {
            int num, x;
            cin >> num;
            while(num--)
            {
                cin >> x;
                team[x] = i;
            }
        }
        queue<int> tq, subq[maxt];
        string cmd;
        while(cin >> cmd)
        {
            if(cmd[0] == 'E')
            {
                int x;
                cin >> x;
                int t = team[x];
                if(subq[t].empty())
                    tq.push(t);
                subq[t].push(x);
            }
            else if(cmd[0] == 'D')
            {
                int t = tq.front();
                cout << subq[t].front() << endl;
                subq[t].pop();
                if(subq[t].empty())
                    tq.pop();
            }
            else if(cmd[0] == 'S')
                break;
        }
        cout << endl;
    }
    return 0;
}
