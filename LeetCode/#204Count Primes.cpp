#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n - 1, true);
        isPrime[0] = false;
        int ans = 0, limit = sqrt(n);
        for (int i = 2; i <= limit; ++i)
            if (isPrime[i - 1])
                for (int j = i * i; j < n; j += i)
                    isPrime[j - 1] = false;
        for (int j = 0; j < n - 1; ++j)
            if (isPrime[j])
                ++ans;
        return ans;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    cout << s.countPrimes(110) << endl;
    return 0;
}
