#include <stdio.h>
#include <string.h>
char s[100], a[100];
int main()
{
    int n, flag[30];
    while(scanf("%d", &n))
    {
        if(n == -1)
            break;
        memset(s, 0, sizeof(s));
        memset(a, 0, sizeof(a));
        memset(flag, 0, sizeof(flag));
        scanf("%s%s", s, a);
        int i = 0;
        while(s[i])
        {
            flag[s[i]-'a'] = 1;     //标记s中的字母
            i++;
        }
        int j = 0, count = 0;
        while(a[j] && count < 7)
        {
            if(flag[a[j]-'a'])
                flag[a[j]-'a'] = -1;        //标记出现过的匹配字母
            if(flag[a[j]-'a'] == -1)
            {
                j++;
                continue;
            }
            count++;
            j++;
        }
        int winflag = 1;
        for(int k = 0; k < 30; k++)
            if(flag[k] == 1)            //检查s中是否有未匹配的字母
                winflag = 0;
        if(winflag)
            printf("Round %d\nYou win.\n", n);
        else if(winflag == 0 && count < 7)
            printf("Round %d\nYou chickened out.\n", n);
        else
            printf("Round %d\nYou lose.\n", n);
    }
    return 0;
}
