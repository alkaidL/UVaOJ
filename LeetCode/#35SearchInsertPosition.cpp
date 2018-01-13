#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        if(len == 0)
            return 0;
        for(int i = 0; i < len; i++)
        {
            if(target <= nums[i])
                return i;
        }
        return len;
   }
};

int main()
{
    Solution s;
    vector<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(4);
    a.push_back(6);
    cout << s.searchInsert(a, 7);
    return 0;
}
