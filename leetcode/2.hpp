struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int value = 0;
        ListNode* tmp = new ListNode(0);
        ListNode* tmpHead = tmp;
        while ((l1 != nullptr) || (l2 != nullptr) || (carry != 0)) {
            value += (l1 == nullptr) ? 0 : l1->val;
            value += (l2 == nullptr) ? 0 : l2->val;
            value += carry;

            if (value > 9) {
                tmp->val = value%10;
                carry=1;
            } else {
                tmp->val = value;
                carry=0;
            }

            l1 = (l1 == nullptr) ? nullptr : l1->next;
            l2 = (l2 == nullptr) ? nullptr : l2->next;
            value=0;

            if ((l1 != nullptr) || (l2 != nullptr) || (carry != 0)) {
                ListNode* nextNode = new ListNode();
                tmp->next = nextNode;
                tmp = tmp->next;
            }
        }
        return tmpHead;
    }
};