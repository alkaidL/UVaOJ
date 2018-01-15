#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int nStart = nums[len-1];
        int nAll = nums[len-1];
        for(int i = len - 2; i >= 0; i--)
        {
            if(nStart < 0)
                nStart = 0;
            nStart += nums[i];
            if(nStart > nAll)
                nAll = nStart;
        }
        return nAll;
    }
};

int main()
{
    vector<int> a;
    a.push_back(-2);
    a.push_back(1);
    a.push_back(-3);
    a.push_back(4);
    a.push_back(-1);
    a.push_back(2);
    a.push_back(1);
    a.push_back(-5);
    a.push_back(4);
    Solution s;
    cout << s.maxSubArray(a);
    return 0;
}
