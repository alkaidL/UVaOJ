#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curLen = 0;
        for(int i = 1; i < nums.size();)
        {
            if(nums[i] == nums[i-1]){
                nums.erase(nums.begin()+i);
            }
            else{
                ++i;
                curLen++;
            }
        }
        return nums.size();
    }
};

int main()
{
    Solution s;
    vector<int> a;
    for(int i = 0; i < 3; i++){
        a.push_back(i);
        a.push_back(i+1);
    }
    cout << s.removeDuplicates(a);
    return 0;
}

//更优解法
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int newSize = 1;
        for(int i = 1; i < size; i++)
            if(nums[i] != nums[i-1])
                nums[newSize++] = nums[i];
        return newSize > nums.size() ? nums.size() : newSize;
    }
};
*/
