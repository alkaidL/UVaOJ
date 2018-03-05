#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root)
        {
            swap(root->right, root->left);
            invertTree(root->right);
            invertTree(root->left);
        }
        return root;
    }
};

void inOrder(TreeNode *p){
    if(p)
    {
        inOrder(p->left);
        cout << p->val << " ";
        inOrder(p->right);
    }
}

void preOrder(TreeNode *p){
    if(p)
    {
        cout << p->val << " ";
        preOrder(p->left);
        preOrder(p->right);
    }
}

int main(int argc, const char * argv[]) {
    TreeNode n1(4), n2(2), n3(7), n4(1), n5(3), n6(6), n7(9);
    TreeNode *p1 = &n1;
    p1->left = &n2;
    p1->right = &n3;
    p1->left->left = &n4;
    p1->left->right = &n5;
    p1->right->left = &n6;
    p1->right->right = &n7;
    
    Solution s;
    TreeNode *p = s.invertTree(p1);
    inOrder(p);
    cout << endl;
    preOrder(p);
    cout << endl;
    return 0;
}
