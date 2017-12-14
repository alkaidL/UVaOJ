#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 2000
char word[MAXN][10], sorted[MAXN][10];
int cmpChar(const void* A, const void* B)
{
    char* a = (char*)A;
    char* b = (char*)B;
    return *a - *b;
}
int cmpString(const void* A, const void* B)
{
    char* a = (char*)A;
    char* b = (char*)B;
    return strcmp(a, b);
}

int main()
{
    int n = 0;
    while(1)
    {
        scanf("%s", word[n]);
        if(word[n][0] == '*')
            break;
        n++;
    }
    qsort(word, n, sizeof(word[0]), cmpString);
    for(int i = 0; i < n; i++)
    {
        strcpy(sorted[i], word[i]);
        qsort(sorted[i], strlen(word[i]), sizeof(char), cmpChar);
    }
    char s[10];
    while(scanf("%s", s) == 1)
    {
        qsort(s, strlen(s), sizeof(char), cmpChar);
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(strcmp(sorted[i], s) == 0)
            {
                flag = 1;
                printf("%s ", word[i]);
            }
        }
        if(!flag)
            printf(":(");
        printf("\n");
    }
    return 0;
}
