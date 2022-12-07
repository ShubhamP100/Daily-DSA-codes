class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
  //   ListNode* Even=head;
   //  ListNode* Odd=head;
     ListNode *odd = NULL, *h1odd = NULL, *even = NULL, *h2even = NULL;
        
        if(!head || !head->next || !head->next->next) return head;
         
        odd = head; h1odd = odd;
      
        even = head->next; h2even = even;
        
        while(even && even->next){
      
            odd->next = odd->next->next;
      
            even->next = even->next->next;
      
            odd = odd->next;
      
            even = even->next;
        }
        
        odd->next  = h2even;
        return h1odd;

    }
};
