#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int curLen = 0;
        for(int i = 0; i < nums.size();)
        {
            if(nums[i] == val)
                nums.erase(nums.begin()+i);
            else{
                ++i;
                curLen++;
            }
        }
        return curLen;
    }
};

int main()
{
    Solution s;
    vector<int> a;
    //for(int i = 0; i < 0; i++)
    //    a.push_back(i);
    a.push_back(3);
    a.push_back(2);
    a.push_back(2);
    a.push_back(3);
    cout << s.removeElement(a, 3);
    return 0;
}

/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
    
        int sz = nums.size();
        if( sz == 0 ) return 0;
        while( nums[sz-1] == val && sz >0 ) sz--;
        for( int i=0; i<sz; ++i){
            if( nums[i] == val ) {
                nums[i] = nums[sz-1];
                sz--;
                while( nums[sz-1] == val ) sz--;
            }
        }
        nums.resize(sz);
        return sz;
    
    }
};
*/
