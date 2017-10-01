#include <stdio.h>
#include <math.h>
int main()
{
    long long a, b;
    while(scanf("%lld%lld", &a, &b) != EOF)
    {
        long long c = fabs(b - a);
        printf("%lld\n", c);
    }
    return 0;
}
