#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXN 1000
int main()
{
    char s[MAXN];
    while(fgets(s, MAXN, stdin) != NULL)
    {
        int flag = 0, count = 0;
        for(unsigned int i = 0; i < strlen(s); i++)
        {
            if(isalpha(s[i]))
            {
                flag = 1;
                continue;
            }
            if(flag)
            {
                count++;
                flag = 0;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
