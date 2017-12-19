#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//以下部分代码可复用
int n = 100, m = 1000000000;

double random()         //生成[0, 1]之间的均匀随机数
{
    return (double)rand() / RAND_MAX;
}

int random(int n)       //生成[0, m-1]之间的均匀随机数
{
    return (int)(random() * (m - 1) + 0.5);
}

int main()
{
    srand(time(NULL));
    printf("%d %d\n", n, m);
    for(int i = 0; i < 100; i++)
    {
        if(rand() % 2 == 0)
            printf("A");
        else
            printf("B");
        int X, Y;
        while(1)
        {
            X = random(n) + 1;
            Y = random(n) + 1;
            if(X != Y)
                break;
        }
        printf(" %d %d\n", X, Y);
    }
    return 0;
}
