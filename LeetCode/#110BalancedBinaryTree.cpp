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
    int depth(TreeNode* root)
    {
        if(!root) return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return abs(depth(root->left) - depth(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};

int main(int argc, const char * argv[]) {
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
    //p1->right->left->right = &n7;
    
    Solution s;
    cout << s.isBalanced(p1) << endl;
    return 0;
}
