#include <iostream>
#include <string>
#include <sstream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    string line;
    while(getline(cin, line)) {
        deque<int> pancakes;
        cout << line << endl;
        int x;
        stringstream ss(line);
        while(ss >> x)
            pancakes.push_front(x);
        for(deque<int>::iterator i = pancakes.begin(); i != pancakes.end(); i++)
        {
            deque<int>::iterator maxP = max_element(i, pancakes.end());
            if(maxP != i)
            {
                if(maxP != pancakes.end()-1)
                {
                    reverse(maxP, pancakes.end());
                    cout << distance(pancakes.begin(), maxP)+1 << ' ';
                }
                reverse(i, pancakes.end());
                cout << distance(pancakes.begin(), i)+1 << ' ';
            }
        }
        cout << "0" << endl;
    }
    return 0;
}
