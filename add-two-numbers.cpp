#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* head = new ListNode(0);
		ListNode* l3 = head;
		int inc(0), res(0), n1(0), n2(0);
		while(l1 != NULL || l2 != NULL || inc != 0) {
			if(l1 != NULL) {
				n1 = l1->val;
				l1 = l1->next;
			} else {
				n1 = 0;
			}

			if(l2 != NULL) {
				n2 = l2->val;
				l2 = l2->next;
			} else {
				n2 = 0;
			}
			res = (n1 + n2 + inc)%10;
			inc = (n1 + n2 + inc)/10;
			l3->val = res;
			if(l1 != NULL || l2 != NULL || inc != 0) {
				l3->next = new ListNode(0);
				l3 = l3->next;
			}
		}

		return head;
	}
};

int main(){
	Solution sol;
	return 0;
}
