#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int totalLen = m + n;
        while(n)
        {
            nums1[--totalLen] = m > 0 && nums1[m-1] > nums2[n-1] ? nums1[--m] : nums2[--n];
        }
        return nums1;
    }
};

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(5);
    vector<int> b;
    b.push_back(2);
    b.push_back(4);
    b.push_back(6);
    b.push_back(8);
    Solution s;
    a.resize(7);
    a = s.merge(a, 3, b, 4);
    for(unsigned int i = 0; i < a.size(); i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}
