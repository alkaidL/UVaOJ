#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        if(!node || !node->next)
            return;
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main(int argc, const char * argv[]) {
    ListNode l1(1), l2(2), l3(3), l4(4), l5(5);
    ListNode *q = &l1;
    ListNode *p = q;
    p->next = &l2;
    p = p->next;
    p->next = &l3;
    p = p->next;
    p->next = &l4;
    p->next->next = &l5;
    
    Solution s;
    s.deleteNode(q->next->next);
    
    while(q)
    {
        cout << q->val << endl;
        q = q->next;
    }
    return 0;
}
