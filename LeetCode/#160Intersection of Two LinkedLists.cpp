#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *pA = headA;
    ListNode *pB = headB;
    int lenA = 0;
    int lenB = 0;
    while (pA) {++lenA;  pA = pA->next; }
    while (pB) {++lenB;  pB = pB->next; }
    for (int diff = abs(lenA - lenB); diff > 0; --diff) {
        if (lenA > lenB) {
            headA = headA->next;
        }
        else {
            headB = headB->next;
        }
    }
    while (headA && headB) {
        if (headA == headB) {
            return headA;
        }
        headA = headA ->next;
        headB = headB ->next;
    }
    return NULL;
}
};

int main(int argc, const char * argv[]) {
    ListNode l1(1), l2(3), l3(3), l4(4), l5(1), l6(3), l7(2), l8(4), l9(0);
    ListNode *q = &l1;
    ListNode *p = q;
    p->next = &l2;
    p = p->next;
    p->next = &l3;
    p = p->next;
    p->next = &l4;
    p = p->next;
    p->next = &l5;
    
    /*
    ListNode *a = &l6;
    ListNode *b = a;
    b->next = &l7;
    b = b->next;
    b->next = &l8;
    b = b->next;
    b->next = &l9;
     */
    
    ListNode *a = &l5;
    ListNode *b = a;
    b->next = &l1;
    b = b->next;
    b->next = &l2;
    b = b->next;
    b->next = &l3;
    
    Solution s;
    ListNode *ans = s.getIntersectionNode(q, a);
    cout << ans->val << " " << ans << endl;
    return 0;
}
