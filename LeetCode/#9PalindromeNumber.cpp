#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long answer = 0;
        int temp = x;
        while (temp != 0) {
            answer = answer * 10 + temp % 10;
            if (answer > 2147483647  || -answer < -2147483648) return false;
            temp /= 10;
        }

        return answer == x ? true : false;
    }
};

int main()
{
    Solution s;
    cout << s.isPalindrome(-2147447412);
    return 0;
}
