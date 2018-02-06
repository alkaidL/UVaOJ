#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target) 
                return {l + 1, r + 1};
            else if (sum < target) 
                ++l;
            else 
                --r;
        }
        return {}; 
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int> a;
    a.push_back(3);
    a.push_back(2);
    a.push_back(2);
    a.push_back(3);
    a = s.twoSum(a, 6);
    cout << a[0] << " " <<  a[1] << endl;
    return 0;
}
