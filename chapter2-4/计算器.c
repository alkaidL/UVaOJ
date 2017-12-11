#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXN 1000
char buf[MAXN];
int main()
{
    char cal = 0;
    int i, calNum = 0, n, a = 0, b = 0, num = 0;
    fgets(buf, MAXN, stdin);
    n = strlen(buf);
    for(i = 0; i < n; i++)
        if(buf[i] == '+' || buf[i] == '-' || buf[i] == '*')
        {
            cal = buf[i];
            calNum = i;
        }
    for(i = 0; i <= calNum; i++)
    {
        if(isdigit(buf[i]))
            a = a * 10 + buf[i] - '0';
    }
    for(i = calNum + 1; i < n; i++)
    {
        if(isdigit(buf[i]))
            b = b * 10 + buf[i] - '0';
    }
    switch(cal)
    {
        case '+':
            num = a + b;
            break;
        case '-':
            num = a - b;
            break;
        case '*':
            num = a * b;
            break;
        default:
            break;
    }
    printf("%d", num);
    return 0;
}
