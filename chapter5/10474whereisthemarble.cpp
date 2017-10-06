#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 10000;
int main()
{
    int n, q, x, a[maxn], kase = 1;
    while(scanf("%d%d", &n, &q) == 2 && n)
    {
        printf("CASE# %d:\n", kase++);
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        sort(a, a+n);
        while(q--)
        {
            scanf("%d", &x);
            int p = lower_bound(a, a+n, x) - a;
            if(a[p] == x)
                printf("%d found at %d\n", x, p+1);
            else
                printf("%d not found\n", x);
        }
    }
    return 0;
}
//vector practice
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;

int main()
{
    int x, n, q, kase = 0;
    while(cin >> n >> q)
    {
        v.clear();
        if(n == 0)
            break;
        cout << "CASE# " << ++kase << ":" << endl;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < q; i++)
        {
           cin >> x;
           vector<int>::iterator p = find(v.begin(), v.end(), x);
           if(p != v.end())
                cout << x << " found at " << p - v.begin() + 1 << endl;
           else
                cout << x << " not found" << endl;
        }

    }
}
