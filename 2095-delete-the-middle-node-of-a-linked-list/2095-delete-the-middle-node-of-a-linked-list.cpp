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
    int length(ListNode* head)
    {
        int c=0;
        while(head!=NULL)
        {
            c++;
            head=head->next;
        }
        return c;
    }
    ListNode* deleteMiddle(ListNode* head) {
       ListNode* temp=head;
        int n=length(head);
        if(n==1)
            return NULL;
        int count=n/2;
        while(count-->1)
          head=head->next;
        head->next=head->next->next;
        
        return temp;
    }
};