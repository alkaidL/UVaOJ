#include <iostream>

using namespace std;
const int maxn = 60;
int main()
{
    int n, numTrains, trains[maxn];
    cin >> n;
    for(int k = 0; k < n; k++)
    {
        while(cin >> numTrains)
        {
            int countSwap = 0;
            for(int i = 0; i < numTrains; i++)
            {
                cin >> trains[i];
            }
            for(int i = 0; i < numTrains; i++)
                for(int j = i+1; j < numTrains; j++)
                {
                    if(trains[i] > trains[j]){
                        countSwap++;
                        swap(trains[i], trains[j]);
                    }
                }
            cout << "Optimal train swapping takes " << countSwap << " swaps." << endl;
        }
    }
    return 0;
}
