/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode *merge2lists(ListNode *l1, ListNode *l2)
{
    if(l1 == nullptr) 
       return l2;
 
    if(l2 == nullptr) 
       return l1;
 
    if(l1->val <= l2->val)
    {
       l1->next = merge2lists(l1->next, l2);
       return l1;
    }
 
    else
    {
       l2->next = merge2lists(l2->next, l1);
       return l2;      
    }
}
 
 
ListNode* Solution::mergeKLists(vector<ListNode*> &A) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    if(A.size() == 0) return nullptr;
 
    while(A.size() > 1)
    {
        A.push_back(merge2lists(A[0], A[1]));
        A.erase(A.begin());
        A.erase(A.begin());
    }
 
    return A.front();
 
 
}