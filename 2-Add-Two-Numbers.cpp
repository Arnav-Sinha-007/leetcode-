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
 ListNode* reverse(ListNode* head){
    if(head==NULL || head->next==NULL){
        return head;
//basey 
    }
    ListNode* newh=reverse(head->next);
    ListNode* front=head->next;
    front->next=head;
    head->next=NULL;
    return newh;
 }
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //ListNode* ll1=reverse(l1);
        //ListNode* ll2=reverse(l2);
        int sum,carry=0;
        ListNode* dumm=new ListNode(-1);
        ListNode* temp=dumm;
        while(l1!=NULL || l2!=NULL){
            sum=carry+0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
            //delete temp2;
        }
        if(carry>0){
        temp->next = new ListNode(carry);
        temp = temp->next;


        }
        return dumm->next;
    }
};