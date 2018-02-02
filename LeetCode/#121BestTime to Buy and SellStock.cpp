#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxDiff = 0, minVal = INT_MAX;
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < minVal)
                minVal = prices[i];
            int temp = prices[i] - minVal;
            if(maxDiff < temp)
                maxDiff = temp;
        }
        return maxDiff;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    vector<int> a;
    a.push_back(10000);
    //a.push_back(1);
    //a.push_back(5);
    //a.push_back(3);
    a.push_back(6);
    a.push_back(4);
    a.push_back(3);
    cout << s.maxProfit(a) << endl;
    return 0;
}
