#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[150];
    int n;
    double number[30];
    scanf("%d", &n);
    for(int c = 0; c < n; c++)
    {
        getchar();
        memset(s, 0, sizeof(s));
        fgets(s, sizeof(s), stdin);
        int len = strlen(s);
        memset(number, 0, sizeof(number));
        for(int i = 1; i < len-1; i++)
        {
            if(s[i] == '=')
            {
                int index = i, flag = i + 1;
                while(isdigit(s[flag]) || s[flag] == '.')
                {
                    if(s[flag] == '.')
                    {
                        index = flag++;
                        continue;
                    }
                    number[s[i-1]-'A'] = number[s[i-1]-'A'] * 10 + (s[flag++] - '0');
                }
                if(s[index] == '.')
                    while(isdigit(s[++index]))
                        number[s[i-1]-'A'] /= 10;
                if(s[flag] == 'M')
                    number[s[i-1]-'A'] *= 1000000;
                else if(s[flag] == 'k')
                    number[s[i-1]-'A'] *= 1000;
                else if(s[flag] == 'm')
                    number[s[i-1]-'A'] /= 1000;
            }
        }
        printf("Problem #%d\n", c+1);
        if(number['P'-'A'] > 0 && number['U'-'A'] > 0)
            printf("I=%.2lfA\n", number['P'-'A'] / number['U'-'A']);
        else if(number['P'-'A'] > 0 && number['I'-'A'] > 0)
            printf("U=%.2lfV\n", number['P'-'A'] / number['I'-'A']);
        else if(number['U'-'A'] > 0 && number['I'-'A'] > 0)
            printf("P=%.2lfW\n", number['I'-'A'] * number['U'-'A']);
        printf("\n");
    }
    return 0;
}
