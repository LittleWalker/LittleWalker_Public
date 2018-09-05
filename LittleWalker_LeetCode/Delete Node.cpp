void deleteNode(ListNode* qHead, ListNode* node) {
		ListNode* p1 = new ListNode(0);
		p1 = qHead;
		while (p1->next != nullptr){
			if (p1->next->val == node->val){
				ListNode* x = p1->next;
				p1->next = p1->next->next;
				delete x;
			}
			else {
				p1 = p1->next;
			}
		}
		delete p1;
	}