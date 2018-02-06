#include <iostream>
using namespace std;


class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        char temp;
        while(n)
        {
            n--;
            temp = n % 26 + 'A';
            ans = temp + ans;
            n /= 26;
        }
        return ans;
    }
};


int main(int argc, const char * argv[]) {
    Solution s;
    cout << s.convertToTitle(26) << endl;      //Z
    cout << s.convertToTitle(703) << endl;     //AAA
    cout << s.convertToTitle(525343) << endl;  //ACWCM
    return 0;
}
