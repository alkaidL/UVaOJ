#include <cstdio>
#define MAXN 500000
int A[MAXN];
int find(int num)
{
    int i = 1;
    while(A[i] != num)
        i++;
    return i;
}

void shiftCircularLeft(int a, int b)        //从A[a]到A[b]往左循环移动
{
    int temp = A[a];
    while(a < b)
    {
        A[a] = A[a+1];
        a++;
    }
    A[b] = temp;
}

void shiftCircularRight(int a, int b)       ////从A[a]到A[b]往右循环移动
{
    int temp = A[b];
    while(a < b)
    {
        A[b] = A[b-1];
        b--;
    }
    A[a] = temp;
}

int main()
{
    int n, m;
    while(scanf("%d%d", &n, &m) == 2)
    {
        int X, Y;
        char type[2];
        for(int i = 1; i <= n; i++)
            A[i] = i;
        for(int i = 0; i < m; i++)
        {
            scanf("%s%d%d", type, &X, &Y);
            int p = find(X);
            int q = find(Y);
            if(type[0] == 'A')
            {
                if(q > p)
                    shiftCircularLeft(p, q-1);
                else
                    shiftCircularRight(q, p);
            }
            else
            {
                if(q > p)
                    shiftCircularLeft(p, q);
                else
                    shiftCircularRight(q+1, p);
            }
        }
        for(int i = 1; i <= n; i++)
            printf("%d ", A[i]);
    }
    return 0;
}
