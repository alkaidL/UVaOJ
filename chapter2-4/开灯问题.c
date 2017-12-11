#include <stdio.h>
#include <string.h>
#define MAXN 1000 + 10
int a[MAXN];
int main()
{
    int i, j, numLights, numPerson, first = 1;
    memset(a, 0, sizeof(a));    //将a数组清零
    scanf("%d%d", &numLights, &numPerson);
    for(i = 1; i <= numPerson; i++)
        for(j = 1; j <= numLights; j++)
            if(j % i == 0)
                a[j] = !a[j];
    for(i = 1; i <= numLights; i++)
    {
        if(a[i])
        {
                if(first)
                    first = 0;      //表示当前输出的变量是否为第一个。保证第一个变量前没有空格
                else
                    printf(" ");
                printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
