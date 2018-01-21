#include <iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {

        if(x == 0 or x == 1)
            return x;

        int low = 1, high = x;
        int ans;

        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(mid == x/mid)
                return mid;
            else if(mid > x/mid)
                high = mid - 1;
            else if(mid < x/mid)
            {
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;

    }
};

int main()
{
    Solution s;
    cout << s.mySqrt(2147483647);
    return 0;
}
