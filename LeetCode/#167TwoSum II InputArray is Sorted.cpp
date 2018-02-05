#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> vec;
        for(int i = 0; i < numbers.size(); ++i)
        {
            for(int j = numbers.size() - 1; j > i; --j)
            {
                if(numbers[i] + numbers[j] == target)
                {
                    vec.push_back(i + 1);
                    vec.push_back(j + 1);
                    return vec;
                }
            }
        }
        return vec;
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
    return 0;
}
