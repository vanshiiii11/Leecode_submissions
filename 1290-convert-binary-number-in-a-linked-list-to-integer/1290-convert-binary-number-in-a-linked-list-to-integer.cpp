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
    int getDecimalValue(ListNode* head) {
        string ans;
        ListNode* temp=head;
        ListNode* prev=NULL; 
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        int cnt=0;
        ListNode* temp2=prev;
        while(temp2!=NULL){
            cnt++;
            temp2=temp2->next;
        }
        int dec=0;
        temp2=prev;
        for(int i=0;i<cnt;i++){
            if(temp2->val==1){
                dec+=pow(2,i);
            }
            temp2=temp2->next;
        }
        return dec;
    }
};