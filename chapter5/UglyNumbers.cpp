#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;
typedef long long LL;
const int mulArr[3] = {2, 3, 5};
int main()
{
    //越小的整数优先级越大的优先队列可以写成 priority_queue<int，vector<int>，greater<int>> pq
    priority_queue<LL, vector<LL>, greater<LL> > pq;
    set<LL> s;
    pq.push(1);
    s.insert(1);
    for(int i = 1; ; i++)
    {
        LL x = pq.top();
        pq.pop();
        if(i == 1500){
            cout << "The 1500'th ugly number is " << x << "." <<endl;
            break;
        }
        for(int j = 0; j < 3; j++)
        {
            LL x2 = x * mulArr[j];
            if(!s.count(x2))
            {
                s.insert(x2);
                pq.push(x2);
            }
        }
    }
    return 0;
}
