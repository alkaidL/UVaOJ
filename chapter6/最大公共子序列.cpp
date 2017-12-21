#include <iostream>
#include <cstring>
//求两个序列最大公共子序列的长度，如给出abcfbc和abfcab。输出为4
using namespace std;
char sz1[1000];
char sz2[1000];
int maxLen[1000][1000];

int main()
{
    while(cin >> sz1 >> sz2){
        int len1 = strlen(sz1);
        int len2 = strlen(sz2);
        int nTmp;
        int i, j;
        for(i = 1; i <= len1; i++)
            maxLen[i][0] = 0;
        for(j = 1; j <= len2; j++)
            maxLen[0][j] = 0;
        for(int i = 1; i <= len1; i++)
            for(int j = 1; j <= len2; j++)
                if(sz1[i-1] == sz2[j-1])
                    maxLen[i][j] = maxLen[i-1][j-1] + 1;
                else
                    maxLen[i][j] = max(maxLen[i-1][j], maxLen[i][j-1]);     //反证法证明maxLen[i][j]不可能同时大于后两者也不可能小于后两者
        cout << maxLen[len1][len2] << endl;
    }
    return 0;
}
