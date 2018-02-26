#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 0) return false;
        unordered_map<int, int> cnt;
        for(int i : nums)
        {
            if (++cnt[i] > 1) {
                return true;
            }
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> a;
    a.push_back(5);
    a.push_back(0);
    a.push_back(1);
    a.push_back(2);
    
    Solution s;
    cout << s.containsDuplicate(a) << endl;
    return 0;
}
