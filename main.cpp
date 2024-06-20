// Code

// Definition for singly-linked list.
/*
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
*/

class Solution 
{
public:
    ListNode* middleNode(ListNode* head) 
    {
        if (!head)
            return nullptr;

        // Floyd's tortoise and hare algorithm approach

        ListNode* p = head;
        ListNode* q = head;

        while (q && q->next)
        {
            p = p->next;
            q = q->next->next;
        }
        return p;
    }
};
