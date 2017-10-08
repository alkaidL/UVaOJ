#include <iostream>
using namespace std;
const int maxn = 1010;
int main()
{
    int n, ans[maxn], guess[maxn], kase = 1;
    while(cin >> n && n)
    {
        for(int i = 0; i < n; i++)
            cin >> ans[i];
        cout << "Game " << kase++ << ":" << endl;
        while(1)
        {
            int strong = 0, weak = 0;
            for(int i = 0; i < n; i++)
            {
                cin >> guess[i];
                if(ans[i] == guess[i])
                    strong++;
            }
            if(guess[0] == 0)
                break;
            for(int num = 0; num < 10; num++)
            {
                int count1 = 0, count2 = 0;
                for(int j = 0; j < n; j++)
                {
                    if(num == guess[j])
                        count1++;
                    if(num == ans[j])
                        count2++;
                }
                weak += (count1 > count2) ? count2 : count1;
            }
            cout << "    (" << strong << "," << weak-strong << ")" <<endl;
        }
    }
    return 0;
}
