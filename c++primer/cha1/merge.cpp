struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(null) {}
}

class solution {
public:
    ListNode Merge(ListNode l1, ListNode l2) {
        if (l1 == null) return l2;
        if (l2 == null) return l1;

        ListNode dummy = new Listnode(0);
        ListNode pt1 = l1;
        ListNode pt2 = l2;
        ListNode current = dummy;
        
        while (pt1 != null && pt2 != null) {
            if (pt1.val <= pt2.val) {
               current.next = pt1;
               pt1 = pt1.next;
               }
            else {
               current.next = pt2;
               pt2 = pt2.next;
                }
            
            current = current.next;
        }
        
        if (pt1 == null) {
           current.next = pt2;
           }
        else {
           current.next = pt1;
           }
        
        return dummy.next;
    }
};


