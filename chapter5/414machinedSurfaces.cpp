#include <stdio.h>
#include <string.h>
int main()
{
    char s[15][30];
    int n, max;
    while(scanf("%d", &n) == 1)
    {
        getchar();
        if(n == 0)
            break;
        int count[15], sum = 0;
        memset(count, 0, sizeof(count));
        for(int i = 0; i < n; i++)
        {
            fgets(s[i], sizeof(s[0]), stdin);
        }
        max = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < 25; j++)
                if(s[i][j] == 'X')
                    count[i]++;
            if(max < count[i])
                max = count[i];
        }
        for(int i = 0; i < n; i++)
            sum += max - count[i];
        printf("%d\n", sum);
    }
    return 0;
}
