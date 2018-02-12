#include <iostream>
using namespace std;

struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val)
            head = head->next;
        ListNode *p = head;
        while (p && p->next) {
            if (p->next->val == val) {
                p->next = p->next->next;
            }
            else
                p = p->next;
        }
        return head;
    }
};

int main(int argc, const char * argv[]) {
    ListNode l1(1), l2(2), l3(6), l4(3), l5(4), l6(5), l7(6);
    ListNode *q = &l1;
    ListNode *p = q;
    p->next = &l2;
    p = p->next;
    p->next = &l3;
    p = p->next;
    p->next = &l4;
    p = p->next;
    p->next = &l5;
    p = p->next;
    p->next = &l6;
    p = p->next;
    p->next = &l7;
    p = p->next;
    
    Solution s;
    ListNode *ans = s.removeElements(q, 6);
    while(ans)
    {
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}
