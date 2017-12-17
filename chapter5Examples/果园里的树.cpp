#include <stdio.h>
#include <math.h>
int area2(int x0, int y0, int x1, int y1, int x2, int y2)
{
    return x0 * y1 + x2 * y0 + x1 * y2 - x0 * y2 - x1 * y0 - x2 * y1;
}

int main()
{
    double x0, y0, x1, y1, x2, y2;
    while(scanf("%lf%lf%lf%lf%lf%lf", &x0, &y0, &x1, &y1, &x2, &y2) == 6)
    {
        int count = 0;
        x0 *= 10; x1 *= 10; x2 *= 10; y0 *= 10; y1 *= 10; y2 *= 10;
        int s = fabs(area2(x0, y0, x1, y1, x2, y2));
        for(int i = 10; i <= 990; i += 10)
            for(int j = 10; j <= 990; j += 10)
            {
                int s1 = fabs(area2(i, j, x1, y1, x2, y2));
                int s2 = fabs(area2(x0, y0, i, j, x2, y2));
                int s3 = fabs(area2(x0, y0, x1, y1, i, j));
                if(fabs(s - s1 - s2 - s3) < 1e-9)
                    count++;
            }
        printf("%d\n", count);
    }
    return 0;
}
