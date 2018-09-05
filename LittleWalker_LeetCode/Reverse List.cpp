ListNode* reverseList(ListNode* head) {
		ListNode* pHead = new ListNode(0);
		pHead->next = head;
		ListNode* pTail = head;

		if (head == nullptr || head->next == nullptr)
			return head;
		while (pTail->next->next != nullptr)
			pTail = pTail->next;
		
		pHead->next = pTail->next;
		pTail = head;
		while (1){
			if (pTail->next->next != nullptr)
				pTail = pTail->next;


			else if (pTail->next->next == nullptr){
					pTail->next->next = pTail;
					pTail->next = nullptr;
					pTail = head;
					if (pTail->next == nullptr)
						break;
				}
			}
		return pHead->next;
	}