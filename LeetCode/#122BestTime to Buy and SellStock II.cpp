#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        for(size_t i = 1; i < prices.size(); i++)
        {
            maxPro += max(prices[i] - prices[i-1], 0);
        }
        return maxPro;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int> a;
    a.push_back(10000);
    a.push_back(1);
    a.push_back(5);
    a.push_back(3);
    a.push_back(6);
    a.push_back(4);
    a.push_back(3);
    cout << s.maxProfit(a) << endl;
    return 0;
}
