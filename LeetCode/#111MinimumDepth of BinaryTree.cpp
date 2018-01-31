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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        if(!root->left || !root->right)
            return max(minDepth(root->left), minDepth(root->right)) + 1;
        return min(minDepth(root->left), minDepth(root->right)) + 1;
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
    //p1->left->left = &n4;
    //p1->left->right = &n5;
    p1->right->left = &n6;
    p1->right->left->right = &n7;
    
    Solution s;
    cout << s.minDepth(p1) << endl;
    return 0;
}
