/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode* t;
    ListNode* temp;
    t=A;
    temp=t;
    int c=1;
    while(t->next)
    {
        t=t->next;
        c++;
    }
    int size=c;
    c=c-B;
    t->next=A;
    while(c--)
    {
        temp=temp->next;
    }
    ListNode* end;
    end=temp;
    size--;
    while(size--)
    {
        end=end->next;
    }
    end->next=NULL;
    return temp;
}
