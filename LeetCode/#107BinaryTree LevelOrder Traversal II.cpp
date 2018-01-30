#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int depth(TreeNode *root) {
        if (!root) return 0;
        return max(depth(root->left),depth(root->right))+1;
    }
    
    void levelOrder(vector<vector<int>> &a, TreeNode *node, int level){
        if(!node) return;
        a[level].push_back(node->val);
        levelOrder(a, node->left, level-1);
        levelOrder(a, node->right, level-1);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int d = depth(root);
        vector<vector<int>> ans(d, vector<int> {});
        levelOrder(ans, root, d-1);
        return ans;
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
    p1->right->left->right = &n7;
    
    Solution s;
    s.levelOrderBottom(p1);
    return 0;
}
