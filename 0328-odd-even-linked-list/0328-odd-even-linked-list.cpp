/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
      if(head==NULL)
          return NULL;
        ListNode*p=head,*q=head->next,*r=q;
        while(r && r->next)
        {
           p->next=p->next->next;
           r->next=r->next->next; 
           p=p->next;
           r=r->next; 
        }
        p->next=q;
        return head;
    }
};