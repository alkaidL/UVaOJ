#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n)
        {
            if(n & 1)
                count++;
            n = n >> 1;
        }
        return count;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    cout << s.hammingWeight(2147483647) << endl;
    return 0;
}
