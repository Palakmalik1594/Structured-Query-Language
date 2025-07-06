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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        int sum=0;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>p;
        for(int i=1;i<v.size();i++){
            if(v[i]!=0){
                sum+=v[i];
            }else if(sum!=0){
            p.push_back(sum);
            sum=0;
            }
        }
        ListNode* dummy=new ListNode(0);
        ListNode* t=dummy;

        for(int n:p){
            t->next=new ListNode(n);
            t=t->next;
        } 
        return dummy->next;
         }
};