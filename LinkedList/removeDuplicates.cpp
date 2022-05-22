#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head) {
	ListNode *curr = head;
	if (head == NULL)
		return head;
	else
	{
		ListNode *curr2 = head->next;
		while (curr2 != NULL)
		{
			if (curr2->val == curr->val)
			{
				curr->next = curr2->next;
				curr2 = curr2->next;
			}
			else
			{
				curr = curr->next;
				curr2 = curr2->next;
			}
		}
		return head;
	}
}


int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

	ListNode *head = new ListNode(1);
	ListNode *temp1 = new ListNode(1);
	ListNode *temp2 = new ListNode(1);
	head->next = temp1;
	head->next->next = temp2;
	ListNode *ans = new ListNode();
	ans = deleteDuplicates(head);
	ListNode *t = ans;
	while (t != NULL)
	{
		cout << t->val << " ";
		t = t->next;
	}
	return 0;
}