#include <iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string c = "";
        int aLen = a.length() - 1, bLen = b.length() - 1, carry = 0;
        while(aLen >= 0 || bLen >= 0)
        {
            int n = aLen >= 0 ? a[aLen--] - '0' : 0;
            int m = bLen >= 0 ? b[bLen--] - '0' : 0;
            int cur = n + m + carry;
            c = to_string(cur % 2) + c;
            carry = cur / 2;
        }
        return carry == 1 ? "1" + c : c;
    }
};

int main()
{
    Solution s;
    cout << s.addBinary("1111", "1111");
    return 0;
}
