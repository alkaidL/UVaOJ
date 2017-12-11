#include <cstdio>
#include <cstring>
#define MAXN 1000
char word[MAXN];
int main()
{
    scanf("%s", word);
    int len = strlen(word);
    for(int i = 1; i <= len; i++)
    {
        if(len % i == 0)
        {
            int flag = 1;
            for(int j = i; j < len; j++)
                if(word[j] != word[j%i])
                {
                    flag = 0;
                    break;
                }
            if(flag)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}
