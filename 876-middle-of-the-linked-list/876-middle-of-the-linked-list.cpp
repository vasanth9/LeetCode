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
    ListNode* middleNode(ListNode* head) {
        int n=length(head);
        n=n/2;
        int i=0;
        while(i<n){
            head=head->next;i++;
        }
        return head;
    }
    private:
        int length(ListNode* head){
            int count=0;
            while(head){
                head=head->next;
                count++;
            }
            return count;
        }
         
};