#include <stdio.h>
const char *s1 = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";   //注意这里\A是转义符，所以要多加一个反斜杠
int main()
{
    int i;
    int c;
    while( (c = getchar()) != EOF)
    {
        for(i = 1; s1[i] && s1[i] != c; i++);   //找到c对应的s[i]从而能找到s[i-1]
        if(s1[i])
            putchar(s1[i-1] );
        else
            putchar(c);
    }
    return 0;
}
