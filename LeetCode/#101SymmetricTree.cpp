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
    bool isSubSymmetric(TreeNode* l, TreeNode* r)
    {
        if(l == NULL || r == NULL)
            return l == r;
        if(l->val != r->val)
            return false;
        return isSubSymmetric(l->left, r->right) && isSubSymmetric(l->right, r->left);
    }
    bool isSymmetric(TreeNode* root) {
        return root == NULL || isSubSymmetric(root->left, root->right);
    }
};

int main() {
    TreeNode n1(1);
    TreeNode n2(2);
    TreeNode n3(2);
    TreeNode n4(1);
    TreeNode n5(2);
    TreeNode n6(2);
    TreeNode n7(1);
    TreeNode *p1 = &n1;
    p1->left = &n2;
    p1->right = &n3;
    p1->left->left = &n4;
    p1->left->right = &n5;
    p1->right->left = &n6;
    p1->right->right = &n7;
    
    Solution s;
    cout << s.isSymmetric(p1) << endl;
    return 0;
}
