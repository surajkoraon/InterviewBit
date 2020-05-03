
  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode next;
      ListNode(int x)  val(x), next(NULL) {}
  };
 
ListNode SolutiondeleteDuplicates(ListNode A) {
    ListNode temp;
    ListNode t;
    temp=A;
    t=temp;
    while(A!=NULL)
    {
        if(A-val!=temp-val)
        {
            temp-next=A;
            temp=temp-next;
        }
        A=A-next;
    }
    temp-next=NULL;
    return t;
}
