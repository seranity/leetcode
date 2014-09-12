#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

ListNode* genList(int* a, int n) {
	ListNode * head = NULL;
	if(a!=NULL) head = new ListNode(a[0]);
	ListNode * node = head;
	for(int i = 1; i < n; i++) {
		node->next = new ListNode(a[i]);
		node = node->next;
	}
	return head;
}
void printList(ListNode* head) {
	while(head != NULL) {
		cout << head->val << "->";
		head = head->next;
	}
	cout << endl;
}
