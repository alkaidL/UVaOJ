#include <stdio.h>
#include <string.h>
#include <ctype.h>
const char* mirror = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";         //给出镜像串

char reverse(char ch)
{
    if(isalpha(ch))
        return mirror[ch-'A'];
    else
        return mirror[ch-'0'+25];
}

int isMirror(char s[], int len, int pos)
{
    int flag = 1;
    while(pos <= len)
    {
        if(reverse(s[pos]) != s[len-pos])
        {
            flag = 0;
            break;
        }
        pos++;
    }
    return flag;
}

int isPalindrome(char s[], int len, int pos)
{
    int flag = 1;
    while(pos <= len)
    {
        if(s[pos] != s[len-pos])
        {
            flag = 0;
            break;
        }
        pos++;
    }
    return flag;
}

int main()
{
    char s[25];
    while(scanf("%s", s) == 1)
    {
        int len = strlen(s) - 1;
        int pos = len / 2;
        printf("%s", s);
        if(isPalindrome(s, len, pos))
        {
            if(isMirror(s, len, pos))
                printf(" -- is a mirrored palindrome.\n");
            else
                printf(" -- is a regular palindrome.\n");
        }
        else if(isMirror(s, len, pos))
            printf(" -- is a mirrored string.\n");
        else
            printf(" -- is not a palindrome.\n");
    }
    printf("\n");
    return 0;
}
