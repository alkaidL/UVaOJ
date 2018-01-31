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
    
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        if(!root->left && !root->right && sum - root->val == 0)
            return true;
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};

int main(int argc, const char * argv[]) {
    TreeNode n1(5);
    TreeNode n2(4);
    TreeNode n3(8);
    TreeNode n4(11);
    TreeNode n5(13);
    TreeNode n6(4);
    TreeNode n7(7);
    TreeNode n8(2);
    TreeNode n9(1);
    TreeNode *p1 = &n1;
    p1->left = &n2;
    p1->right = &n3;
    p1->left->left = &n4;
    p1->right->left = &n5;
    p1->right->right = &n6;
    p1->left->left->left = &n7;
    p1->left->left->right = &n8;
    p1->right->right->right = &n9;
    
    Solution s;
    cout << s.hasPathSum(p1, 22) << endl;
    cout << s.hasPathSum(p1, 21) << endl;
    return 0;
}

