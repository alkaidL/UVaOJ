#include <iostream>
using namespace std;

struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = NULL;
        while (head) {
            ListNode *next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        return pre;
    }
};

int main(int argc, const char * argv[]) {
    ListNode l1(1), l2(2), l3(6), l4(3), l5(4), l6(5);
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
    
    Solution s;
    ListNode *ans = s.reverseList(q);
    while(ans)
    {
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}
