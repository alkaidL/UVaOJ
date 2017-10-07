#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int maxn = 30;
vector<int> pile[maxn];         //二维vector
int n;
//找木块a所在的pile和height，以引用的形式返回调用者
void find_block(int a, int &p, int &height)
{
    for(p = 0; p < n; p++)
        for(height = 0; height < pile[p].size(); height++)
            if(pile[p][height] == a)
                return;
}
//把第p堆高度为h的木块上方的所有木块移回原位
void clear_above(int p, int height)
{
    for(unsigned int i = height+1; i < pile[p].size(); i++)
    {
        int b = pile[p][i];
        pile[b].push_back(b);
    }
    pile[p].resize(height+1);
}
//把第p堆高度为h及其上方的木块整体移动到p2 堆的顶部
void pile_onto(int p, int height, int p2)
{
    for(unsigned int i = height; i < pile[p].size(); i++)
    {
        pile[p2].push_back(pile[p][i]);
    }
    pile[p].resize(height);
}

void print()
{
    for(int i = 0; i < n; i++)
    {
        cout << i << ":";
        for(unsigned int j = 0; j < pile[i].size(); j++)
            cout << " " << pile[i][j];
        cout << endl;
    }
}
int main()
{
    int a, b;
    cin >> n;
    string s1, s2;
    for(int i = 0; i < n; i++)
        pile[i].push_back(i);
    while(cin >> s1 >> a >> s2 >> b)
    {
        if(s1 == "quit")
            break;
        int pilea, pileb, heighta, heightb;
        find_block(a, pilea, heighta);
        find_block(b, pileb, heightb);
        if(pilea == pileb)
            continue;
        if(s2 == "onto")
            clear_above(pileb, heightb);
        if(s1 == "move")
            clear_above(pilea, heighta);
        pile_onto(pilea, heighta, pileb);
    }
    print();
    return 0;
}
