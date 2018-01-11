#include <iostream>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        ListNode p3(0);
        ListNode *tail = &p3;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val <= l2->val)
            {
                tail->next = l1;
                l1 = l1->next;
            }
            else{
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        tail->next = l1 ? l1 : l2;
        return p3.next;
    }
};

int main()
{
    return 0;
}

//更优解法
/*
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (!l1)
			return l2;
		if (!l2)
			return l1;

		//ensure l1.value < l2.value
		if (l1->val > l2->val)
			swap(l1, l2);

		ListNode* pos = l1;
		ListNode* temp;
		while(pos->next != nullptr && l2 != nullptr) {
			if (pos->next->val > l2->val) {
				temp = l2;
				l2 = temp->next;
				temp->next = pos->next;
				pos->next = temp;
				pos = pos->next;
			}
			else
				pos = pos->next;
		}

		if(pos->next == nullptr)
			pos->next = l2;
		return l1;
	}
};
*/
