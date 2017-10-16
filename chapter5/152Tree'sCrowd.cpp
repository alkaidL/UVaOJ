#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;
const int maxn = 5010;
double x[maxn], y[maxn], z[maxn];
int dist(int a, int b)
{
    double tx = x[a] - x[b];
    double ty = y[a] - y[b];
    double tz = z[a] - z[b];
    return (int)sqrt(tx * tx + ty * ty + tz * tz);
}
int main()
{
    int dis[10], cnt = 0;
    memset(dis, 0, sizeof(dis));
    while(cin >> x[cnt] >> y[cnt] >> z[cnt] && (x[cnt] || y[cnt] || z[cnt]))
        cnt++;
    for(int i = 0; i < cnt; i++)
    {
        int minDis = 1000000;
        for(int j = 0; j < cnt; j++)
        {
            if(i == j)
                continue;
            int temp = dist(i, j);
            if(temp < minDis)
                minDis = temp;
        }
        if(minDis >= 0 && minDis < 10)
            dis[minDis]++;
    }
    for(int i = 0; i < 10; i++)
        cout << setw(4) << dis[i];
    cout << endl;
    return 0;
}
