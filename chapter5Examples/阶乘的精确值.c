//输入不超过1000的正整数n，输出n!=1*2*...*n的精确结果
#include <stdio.h>
#include <string.h>
const int MAXN = 3000;
int f[MAXN];
int main()
{
    int n, index;
    scanf("%d", &n);
    memset(f, 0, sizeof(f));
    f[0] = 1;
    for(int i = 2; i <= n; i++)
    {
        int c = 0;
        for(int j = 0; j < MAXN; j++)
        {
            int s = f[j] * i + c;
            f[j] = s % 10;
            c = s / 10;
        }
    }
    for(index = MAXN - 1; index >= 0; index--)
        if(f[index])
            break;
    for(int i = index; i >= 0; i--)
        printf("%d", f[i]);
    return 0;
}
