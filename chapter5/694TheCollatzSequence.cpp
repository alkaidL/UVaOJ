#include <stdio.h>
#include <inttypes.h>
int main()
{
    long long a, limit;
    int num = 1;
    while(scanf("%lld%lld", &a, &limit))
    {
        if(a == -1 && limit == -1)
            break;
        printf("Case %d: A = %lld, limit = %lld, ", num, a, limit);
        int count = 0;
        while(a <= limit)
        {
            if(a == 1){
                count++;
                break;
            }
            if(a % 2 == 0){
                a /= 2;
                count++;
                continue;
            }
            if(a % 2 == 1){
                a = 3 * a + 1;
                count++;
            }
        }
        printf("number of terms = %d\n", count);
        num++;
    }
    return 0;
}
