int findLength(struct ListNode* head){
    int cnt=0;
    while(head!=NULL){
        head=head->next;
        cnt++;
    }
    return cnt;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {

    int lengthA=findLength(headA);
    int lengthB=findLength(headB);

    int difference=abs(lengthA-lengthB);

    if(lengthA>lengthB){
        for(int i=0;i<difference;i++) headA=headA->next;
    }else{
        for(int i=0;i<difference;i++) headB=headB->next;
    }

    while(headA!=NULL&&headB!=NULL){
        if(headA==headB) return headA;
        headA=headA->next;
        headB=headB->next;
    }
    return NULL;
}