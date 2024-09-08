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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* teli=list2;
        ListNode* dum=new ListNode(-1);
        ListNode* nile=dum;
        while(temp!=NULL && teli!=NULL){
            int lam=temp->val;
            int kef=teli->val;
            if(lam<kef){
                //ListNode* front=teli;
                nile->next=temp;
                temp=temp->next;

            }
            else{
                nile->next=teli;
                teli=teli->next;
            }
            nile=nile->next;


        }
        if(temp!=NULL){
            nile->next=temp;
        }
        else{
            nile->next=teli;
        }
        ListNode* pr=dum->next;
        return pr;

        
    }
};