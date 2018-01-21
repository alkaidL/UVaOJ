#include <iostream>

using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int sum = 1;
        int a = 1;
        int b = 2;
        if(n == 2)
            return 2;
        for (int i = 3; i <= n; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }

        return sum;
    }
};

int main()
{
    Solution s;
    cout << s.climbStairs(88);
    return 0;
}
