//输入正整数n (2<=n<=100)，把n!分解成素因子相乘的形式，从小到大输出各个素数的指数，如825= 3 * 5^2 * 11应表示成(0,1,2,0,1)
#include <stdio.h>
#include <string.h>
int isPrime(int num)
{
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int prime[100], p[100];
    int count = 0, n;
    for(int i = 2; i <= 100; i++)
    {
        if(isPrime(i))
            prime[count++] = i;
    }
    while(scanf("%d", &n) == 1)
    {
        memset(p, 0, sizeof(p));
        printf("%d! =", n);
        int maxp = 0;
        for(int i = 1; i <= n; i++)
        {
            int m = i;
            for(int j = 0; j < count; j++)
            {
                while(m % prime[j] == 0)
                {
                    m /= prime[j];
                    p[j]++;
                    if(j > maxp)
                        maxp = j;
                }
            }
        }
        for(int i = 0; i <= maxp; i++)
            printf(" %d", p[i]);
        printf("\n");
    }
    return 0;
}
