#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int maxcol = 60;
const int maxn = 100;
string fileNames[maxn];

void print(const string& s, int len, char extra)
{
    cout << s;
    for(unsigned int i = 0; i < len - s.length(); i++)
    {
        cout << extra;
    }
}

int main()
{
    int n;
    while(cin >> n)
    {
        int Max = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> fileNames[i];
            Max = max(Max, (int)fileNames[i].length());
        }
        print("", 60, '-');
        cout << endl;
        int cols = (maxcol - Max) / (Max + 2) + 1;
        int rows = (n - 1) / cols + 1;
        sort(fileNames, fileNames + n);
        for(int r = 0; r < rows; r++)
        {
            for(int c = 0; c < cols; c++)
            {
                int idx = c * rows + r;
                if(idx < n)
                    print(fileNames[idx], c == cols - 1 ? Max : Max + 2 , ' ');
            }
            cout << endl;
        }
    }
    return 0;
}
