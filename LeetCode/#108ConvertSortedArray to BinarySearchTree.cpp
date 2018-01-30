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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        int mid = nums.size() / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        vector<int> leftNums(nums.begin(), nums.begin()+mid);
        vector<int> rightNums(nums.begin()+mid+1, nums.end());
        root->left = sortedArrayToBST(leftNums);
        root->right = sortedArrayToBST(rightNums);
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
    vector<int> nums;
    for(int i = 0; i < 10; i++)
    {
        nums.push_back(i+1);
    }
    Solution s;
    TreeNode *p = s.sortedArrayToBST(nums);
    inOrder(p);
    cout << endl;
    preOrder(p);
    cout << endl;
    return 0;
}
