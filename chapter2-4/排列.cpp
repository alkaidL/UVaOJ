//1到9组成3个3位数，每个数恰好用一次，abc:def:ghi=1:2:3，输出所有解
#include <cstdio>
void result(int num, int &resultAdd, int &resultMul);
int main()
{
    int i, j, k;
    int result_add, result_multiple;
    for(i = 123; i <= 329; i++)                 //abc最小值123。由ghi最大值987，可粗略定abc最大值329
    {
        j = 2 * i;
        k = 3 * i;
        result_add = 0;
        result_multiple = 1;
        result(i, result_add, result_multiple);
        result(j, result_add, result_multiple);
        result(k, result_add, result_multiple);
        if(result_add == 45 && result_multiple == 362880)   //1+2+...+9=45, 1*2*...*9=362880
            printf("%d %d %d\n", i, j, k);
    }
    return 0;
}

void result(int num, int &resultAdd, int &resultMul)
{
    int i, j, k;
    i = num / 100;
    j = num / 10 % 10;
    k = num % 10;
    resultAdd += i + j + k;
    resultMul *= i * j * k;
}

