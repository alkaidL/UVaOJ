#include <iostream>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length(), counts = 0, sum = 0;
        for(int i = len - 1; i >= 0; i--)
        {
            int temp = 1, mul = counts;
            while(mul--)
                temp *= 26;
            temp *= s[i] - 'A' + 1;
            sum += temp;
            counts++;
        }
        return sum;
    }
};

int main(int argc, const char * argv[]) {
    string str = "ABC";
    Solution s;
    cout << s.titleToNumber(str) << endl;
    return 0;
}
