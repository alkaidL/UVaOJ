#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> input;
    for(int i = -5; i < 0; i++)
        input.push_back(i);
    Solution s;
    s.twoSum(input, -4);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
