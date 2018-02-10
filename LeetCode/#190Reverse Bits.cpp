#include <iostream>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans = 0;
        for(int i = 0; i < 32; i++, n >>= 1)
            ans = ans << 1 | (n & 1);
        return ans;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    cout << s.reverseBits(43261596) << endl;
    return 0;
}
