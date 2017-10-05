#include <stdio.h>

int main()
{
    char s[100];
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(fgets(s, sizeof(s), stdin))
    {
        if(s[0] == '_')
            continue;
        int c = 0;
        for(int i = 2; i < 10; i++)
        {
            if(s[i] == 'o')
                c = c * 2 + 1;
            else if(s[i] == ' ')
                c *= 2;
        }
        printf("%c", c);
    }
    return 0;
}
