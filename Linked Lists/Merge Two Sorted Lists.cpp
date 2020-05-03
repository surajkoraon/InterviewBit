/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* t;
    ListNode* temp;;
    if(A->val<B->val)
    {
    //    ListNode* x;
    //    x->val=A->val;
    //    x->next=NULL;
        struct ListNode* x=new ListNode(A->val);
        t=x;
        A=A->next;
    }
    else
    {
    //    ListNode* x;
    //    x->val=A->val;
    //    x->next=NULL;
        struct ListNode* x=new ListNode(B->val);
        t=x;
        B=B->next;
    }
    temp=t;
    while(A && B)
    {
        if(A->val<B->val)
        {
    //    ListNode* x;
    //    x->val=A->val;
    //    x->next=NULL;
        struct ListNode* x=new ListNode(A->val);
            t->next=x;
            t=t->next;
            A=A->next;
        }
        else
        {
    //    ListNode* x;
    //    x->val=A->val;
    //    x->next=NULL;
            struct ListNode* x=new ListNode(B->val);
            t->next=x;
            t=t->next;
            B=B->next;
        }
    }
    if(A)
        t->next=A;
    else
        t->next=B;
    return temp;
}
