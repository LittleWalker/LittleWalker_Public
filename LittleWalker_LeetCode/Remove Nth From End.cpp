 ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* pHead = new ListNode(0);
		pHead->next = head;
		ListNode* ins = head;
		int len = 0;

		while (ins){
			len++;
			ins = ins->next;
		}

		ins = pHead;
		len -= n;
		while (len){
			len--;
			ins = ins->next;
		}
		ins->next = ins->next->next;

		return pHead->next;
	}