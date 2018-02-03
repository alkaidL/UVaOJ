#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
//快慢指针法，重合即有环路。
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
            return false;
        ListNode *f = head, *s = head;
        while(f->next && f->next->next)
        {
            s = s->next;
            f = f->next->next;
            if(f == s)
                return true;
        }
        return false;
    }
};

int main(int argc, const char * argv[]) {
    ListNode l1(1), l2(3), l3(2), l4(4);
    ListNode *q = &l1;
    ListNode *p = q;
    p->next = &l2;
    p = p->next;
    p->next = &l3;
    p = p->next;
    p->next = &l4;
    p = p->next;
    //p->next = &l1;
    
    Solution s;
    cout << s.hasCycle(q) << endl;
    return 0;
}
