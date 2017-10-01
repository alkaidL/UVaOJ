#include <stdio.h>
#include <string.h>
#define N 110
int main(void)
{
    char s[N][N];
    int i, j, k, max;
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    for (i = max = 0, memset(s, ' ', sizeof(s)); fgets(s[i], N, stdin); i++)
        if (strlen(s[i]) > max)
            max = strlen(s[i]);
    for (j = 0; j < max-1; j++) {
        for (k = i-1; k >= 0; k--)
                s[k][j] != '\n' && s[k][j] ? putchar(s[k][j]) : putchar(' ');
        printf("\n");
    }
    return 0;
}
