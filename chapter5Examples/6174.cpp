//输入一个n位数，输出操作序列直到新得到的数曾经得到过
#include <stdio.h>
#include <string.h>
int getNext(int num)
{
    int smallNum, bigNum, len;
    char s[10];
    sprintf(s, "%d", num);      //将输入的数据转化成字符串
    len = strlen(s);
    for(int i = 0; i < len; i++)
        for(int j = i + 1; j < len; j++)
            if(s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
    sscanf(s, "%d", &smallNum);         //读取字符串中的数据
    for(int i = 0; i < len / 2; i++)        //一定要记得逆序时条件为length/2
    {
        char temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
    sscanf(s, "%d", &bigNum);
    return bigNum - smallNum;
}

int main()
{
    int a[2000];
    int count = 1;
    scanf("%d", &a[0]);
    printf("%d", a[0]);
    while(1)
    {
        int flag = 0;
        a[count] = getNext(a[count-1]);
        printf(" -> %d", a[count]);
        for(int i = 0; i < count; i++)
        {
            if(a[i] == a[count])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            break;
        count++;
    }
    return 0;
}
