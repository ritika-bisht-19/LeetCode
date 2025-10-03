struct ListNode* sort(struct ListNode* left, struct ListNode* right){
    if(!left) return right;
    if(!right) return left;

    struct ListNode* result=NULL;
    if(left->val<=right->val){
        result=left;
        result->next=sort(left->next,right);
    }else{
        result=right;
        result->next=sort(left,right->next);
    }
    return result;
}

struct ListNode* getMiddle(struct ListNode* head){
    if(head==NULL) return head;

    struct ListNode* slow=head;
    struct ListNode* fast=head->next;

    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

struct ListNode* sortList(struct ListNode* head) {
    if(head==NULL||head->next==NULL) return head;

    struct ListNode* middle=getMiddle(head);
    struct ListNode* middleNext=middle->next;

    middle->next=NULL;

    struct ListNode* left=sortList(head);
    struct ListNode* right=sortList(middleNext);

    return sort(left,right);
}