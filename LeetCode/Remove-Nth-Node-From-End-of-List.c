/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head->next==NULL) return NULL;
    struct ListNode* temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    int res=cnt-n;
    if (res == 0) {
        struct ListNode* ptr=head;
        head = head->next;
        free(ptr);
        return head;
    }
    temp=head;
    for (int i = 1; i < res; i++){
        temp=temp->next;
    }
    struct ListNode* ptr=temp->next;
    temp->next=ptr->next;
    free(ptr);
    return head;
}