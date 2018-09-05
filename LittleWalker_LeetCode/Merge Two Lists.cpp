struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL){}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* p1 = nullptr;
		if (l1 == nullptr)
			return l2;
		else if (l2 == nullptr)
			return l1;
		else if (l1 == nullptr && l2 == nullptr)
			return l1;
			if (l1->val < l2->val){
				p1 = l1;
				p1->next = mergeTwoLists(l1->next, l2);
			}
			else {
				p1 = l2;
				p1->next = mergeTwoLists(l1, l2->next);
			}
			return p1;
	}
};