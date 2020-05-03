/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int c=1;
    ListNode* t;
    ListNode* tmp;
    t=A;
    while(t->next!=NULL)
    {
        t=t->next;
        c++;
    }
    int size=c;
    c=c-B;
    if(B>size)
    {
        A=A->next;
        return A;
    }
    ListNode* s;
    s=tmp;
    while(c>0)
    {
        struct ListNode* x=new ListNode(A->val);
        if(tmp)
        {
            tmp->next=x;
            tmp=tmp->next;
        }
        else
            tmp=x;
        A=A->next;
        c--;
    }
    if(A->next!=NULL)
        tmp->next=A->next;
    return s;
}
