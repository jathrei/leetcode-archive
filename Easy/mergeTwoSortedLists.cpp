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
        ListNode* head;
        ListNode* current;

        //check nullptr cases
        if(list1 == nullptr){
            if(list2 == nullptr){
                return nullptr;
            }
            else{
                return list2;
            }
        }
        if(list2 == nullptr){
            return list1;
        }

        //check first node
        //list1 is bigger, start at list2
        if(list1->val >= list2->val){
            head = list2;
            current = list2;
            list2 = list2->next;
        }
        //list 2 is bigger, start at list1
        else{
            head = list1;
            current = list1;
            list1 = list1->next;
        }

        //loopin
        while((list1 != nullptr)&&(list2 != nullptr)){
            if(list2->val >= list1->val){
                current->next = list1;
                current = current->next;
                list1 = list1->next;
            }
            else{
                current->next = list2;
                current = current->next;
                list2 = list2->next;
            }
        }
        if(list1 == nullptr){
            current->next = list2;
        }
        else{
            current->next = list1;
        }
        return head;


}
};