#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

class Solution {
public:
    int reverse1(int x) {
        char buf[11];
        int flag = 0;
        if(x < 0)
            flag = 1;
        int num = abs(x);
        sprintf(buf, "%d", num);
        int length = strlen(buf);
        for(int i = 0; i < length / 2; i++)
        {
            char temp;
            temp = buf[i];
            buf[i] = buf[length-i-1];
            buf[length-i-1] = temp;
        }
        long long out;
        sscanf(buf, "%lld", &out);
        if(out > 2147483647 || -out < -2147483648) { return 0;}
        return (flag == 1 ? -out : out);
    }
};

int main()
{
    Solution a;
    cout << a.reverse1(1334236469);

    return 0;
}

//以下是更优解法
/*
class Solution {
public:
    int reverse(int x) {
        long answer = 0;
        while (x != 0) {
            answer = answer * 10 + x % 10;
            if (answer > INT_MAX || answer < INT_MIN) return 0;
            x /= 10;
        }
        return (int)answer;
    }
};
*/
