// Code

// Definition for a binary tree node.
/*
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
*/

class Solution 
{
public:
    ListNode* middleNode(ListNode* head) 
    {
        if (!head)
            return nullptr;

        // Rabbit and Turtle jump Algorithm approach

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
