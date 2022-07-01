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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
          int l=length(head);
          
          ListNode * ans=head;
        
           l=l-n;
       if(l==0) {ans=head->next; return ans;}
        
        for(int i=1;i<l;i++){
            
            head=head->next;
           
        }
     
        head->next=head->next->next;
      
    return ans;
    }
    private:
       int  length(ListNode * head){
           int count=0;
           while(head){
               count++;
               head=head->next;
           }
           return count;
       }
};