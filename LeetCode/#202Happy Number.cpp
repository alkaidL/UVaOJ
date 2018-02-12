#include <iostream>
using namespace std;

class Solution {
public:
    int curDigit(int n)
    {
        int sum = 0;
        while(n)
        {
            int temp = n % 10;
            sum += temp * temp;
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int fast = curDigit(n), slow = n;
        do {
            if(fast == 1)
                return true;
            fast = curDigit(curDigit(fast));
            slow = curDigit(slow);
        } while(fast != slow);
        return false;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    cout << s.isHappy(19) << endl;
    return 0;
}
