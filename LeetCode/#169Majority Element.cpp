#include <iostream>
#include <vector>
using namespace std;

//位运算，26ms
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < 32; i++) {
            int ones = 0, zeros = 0;
            for(int number : nums)
            {
                if((number & (1 << i)) != 0)
                    ++ones;
                else
                    ++zeros;
            }
            if(ones > zeros)
                ans |= (1 << i);
        }
        return ans;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    int n = 3;
    while (n--) {
        a.push_back(1);
    }
    a.push_back(2);
    
    Solution s;
    cout << s.majorityElement(a) << endl;
    return 0;
}

/*************** Moore Voting Algorithm
        // This algorithm runs in O(n) time and O(1) space.
        // Moore Voting Algo can only be used if the number of repetitons of a number is high i.e. is the majority eg: greater than n/2.
        // This algorithm will return a value even if there is no majority and that ret Val will be arr[0]. 
        // If it is not sure that the input array has a majority, a second pass can be made to check if the value obtained is a majority or not. */
        
        // In this algo if count = 0, we make the current ele as the major ele. else if the curr number is same as major, we increment the counter else decrement.
        
        // Runtime = 16ms.
        for(int i = 0; i < n; i ++) {
            if(count == 0)  {
                numMajor = nums[i];
            }
            if(numMajor == nums[i])
                count++;
            else
                count--;
        }
       /**************************************************/
        return numMajor;
    }
};
