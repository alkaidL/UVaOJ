#include <iostream>
#include <vector>
using namespace std;

//dp
class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size(), preSum = 0, curSum = 0;
        for(int i = 0; i < len; i++)
        {
            int temp = max(preSum + nums[i], curSum);
            preSum = curSum;
            curSum = temp;
        }
        return curSum;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> a;
    a.push_back(5);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    Solution s;
    cout << s.rob(a) << endl;
    return 0;
}
