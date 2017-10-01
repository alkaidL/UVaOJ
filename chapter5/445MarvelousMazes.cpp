#include <stdio.h>
#include <string.h>
#include <ctype.h>
char s[150][150];
int main()
{
    int i = 0;
 //   freopen("in.txt", "r", stdin);
 //   freopen("out.txt", "w", stdout);
    while(fgets(s[i], sizeof(s[0]), stdin))
    {
        unsigned int j;
        for(j = 0; j < strlen(s[i]) - 1; j++)
        {
            int sum = 0;
            if(s[i][j] == EOF)
                break;
            while(isdigit(s[i][j]))
            {
                sum += s[i][j] - '0';
                j++;
            }
            if(sum > 0)
            {
                if(s[i][j] == 'b')
                    for(int n = 0; n < sum; n++)
                        printf(" ");
                else
                    for(int n = 0; n < sum; n++)
                        printf("%c", s[i][j]);
            }
            if(s[i][j] == '!' || s[i][j] == '\n')
                printf("\n");
        }
        printf("\n");
        if(s[i][j] == EOF)
            break;
        i++;
    }
    return 0;
}
