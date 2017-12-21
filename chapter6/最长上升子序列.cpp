//最长上升子序列问题
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAXN = 1001;
int arr[MAXN];
int maxLen[MAXN];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        maxLen[i] = 1;
        cin >> arr[i];
    }
    for(int i = 2; i <= n; i++)
    //每次求以第i个数为终点的最长上升子序列的长度
        for(int j = 1; j < i; j++)
            if(arr[i] > arr[j])
               maxLen[i] = max(maxLen[i], maxLen[j]+1);
    cout << *max_element(maxLen+1, maxLen+n+1);
    return 0;
}
