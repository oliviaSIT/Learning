//https://leetcode.com/problems/merge-two-sorted-lists/description/
//Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(null) {}
}

class solution {
public:
    ListNode* Merge(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        ListNode dummy = ListNode(0);
        ListNode* current = &dummy;
        
        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
               current->next = l1;
               l1 = l1->next;
               }
            else {
               current->next = l2;
               l2 = l2->next;
                }
            
            current = current->next;
        }
        
        if (l1 == NULL) {
           current->next = l2;
           }
        else {
           current->next = l1;
           }
        
        return dummy.next;
    }
};


