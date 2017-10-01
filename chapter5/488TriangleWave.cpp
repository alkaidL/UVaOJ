#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int m = 0; m < n; m++)
    {
        int amp, fre;
        scanf("%d%d", &amp, &fre);
        for(int j = 0; j < fre; j++)
        {
            for(int i = 1; i < 2 * amp; i++)
            {
                int flag = i;
                while(flag > 0 && flag <= amp)
                {
                    printf("%d", i);
                    flag--;
                }
                while(flag > amp && flag < 2 * amp)
                {
                    printf("%d", 2 * amp - i);
                    flag++;
                }
                printf("\n");
            }
            if(j < fre - 1)
                printf("\n");
        }
        if(m < n - 1)
            printf("\n");
    }
    return 0;
}
