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
    void reorderList(ListNode* head) {
        vector<int> lara;
        ListNode* temp=head;

        while(temp!=NULL){
            int kk;
            kk=temp->val;
            lara.push_back(kk);
            temp=temp->next;
        }
        int start=0;
        int lat=lara.size()-1;
        ListNode* ss=head;
        int count=0;
        while(ss){
            if(count%2==0){
                ss->val=lara[start];
                start++;
            }
            else{
                ss->val=lara[lat];
                lat--;
            }
            count++;
            ss=ss->next;

        }
        
    }
};