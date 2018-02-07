//  编程珠玑原题

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& nums, int start, int end)
    {
        for(; start < end; start++, end--)
            swap(nums[start], nums[end]);
    }
    
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k %= len;
        reverse(nums, 0, len - k - 1);
        reverse(nums, len - k, len - 1);
        reverse(nums, 0, len - 1);
    }
};

int main(int argc, const char * argv[]) {
    
    return 0;
}
