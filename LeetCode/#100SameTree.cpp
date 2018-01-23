#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)
            return true;
        if(p == NULL || q == NULL)
            return false;
        if(p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        return false;
    }
};

int main()
{
    Solution s;
    TreeNode n1(1);
    TreeNode n2(2);
    TreeNode n3(2);
    TreeNode n4(1);
    TreeNode n5(2);
    TreeNode n6(2);
    TreeNode *p1 = &n1;
    p1->left = &n2;
    p1->right = &n3;
    TreeNode *p2 = &n4;
    p2->left = &n5;
    p2->right = &n6;
    cout << s.isSameTree(p1, p2);
    return 0;
}
