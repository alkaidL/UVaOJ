#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[30][100], key[30][30], mirror[30][100];
    int countNum[30];
    int keyNum, excuseNum, es = 1;
    while(scanf("%d%d", &keyNum, &excuseNum) == 2)
    {
        int max = 0;
        getchar();
        memset(s, 0, sizeof(s));
        memset(key, 0, sizeof(key));
        memset(mirror, 0, sizeof(mirror));
        memset(countNum, 0, sizeof(countNum));
        for(int i = 0; i < keyNum; i++)
            fgets(key[i], sizeof(key[0]), stdin);
        for(int i = 0; i < excuseNum; i++)
            fgets(s[i], sizeof(s[0]), stdin);
        for(int i = 0; i < excuseNum; i++)          //将s[i][j]中的字母全部转为小写
            for(unsigned int j = 0; j < strlen(s[i]); j++)
            {
                if(isalpha(s[i][j]))
                    mirror[i][j] = tolower(s[i][j]);
                else
                    mirror[i][j] = s[i][j];
            }
        for(int i = 0; i < excuseNum; i++)
        {
            int first = 1;
            if(!isalpha(mirror[i][0]))
                first = 0;
            for(int a = 0; a < keyNum; a++)
            {
                unsigned int j = 0;
                while(mirror[i][j])
                {
                    unsigned int b = 0;
                    int wordBegin = j;
                    while(mirror[i][j] == key[a][b]  && (first || !isalpha(mirror[i][wordBegin-1])))
                    {
                        if(b == strlen(key[a])-2 && (j == strlen(mirror[i])-2 || !isalpha(mirror[i][j+1])))     //数组下标0开始故-1，fgets存放了回车即'\n'所以还需-1
                        {
                            countNum[i]++;
                            break;
                        }
                        j++;
                        b++;
                    }
                    first = 0;          //在mirror[i][0]为字母时，经过对mirror[i]的第一个单词的判断就必须将first置为0
                    j++;
                }
            }
            if(countNum[i] > max)
                max = countNum[i];
        }
        printf("Excuse Set #%d\n", es++);
        for(int i = 0; i < excuseNum; i++)
        {
            if(countNum[i] == max)
                printf("%s", s[i]);
        }
        printf("\n");
    }
    return 0;
}
