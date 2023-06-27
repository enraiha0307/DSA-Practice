# Problems

## Easy

- [Print a Linked List in reverse](https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem)

```cpp
// Uses recursion here

void reversePrint(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* cur = llist;
 if(cur==NULL){
     return;
 }else{
     reversePrint(cur->next);
     cout<<cur->data<<endl;
 }
}

```

- [Reverse a Linked List](https://www.hackerrank.com/challenges/reverse-a-linked-list/problem?isFullScreen=true)

```cpp
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
SinglyLinkedListNode *prev, * cur, *next;
cur=llist;
prev=next=NULL;

while(cur!=NULL){
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
}
llist = prev;
return llist;
}
```
- [Compare two linked lists](https://www.hackerrank.com/challenges/compare-two-linked-lists/problem?isFullScreen=true&h_r=next-challenge&h_v=zen)

```cpp

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
while(head1!=NULL && head2!=NULL){
    if(head1->data != head2->data){
        return 0;
    }
    head1=head1->next;
    head2=head2->next;
    
    
}
if(head1==NULL && head2==NULL){
    return 1;
}
return 0;
}

```

- [Merge two sorted linked lists](https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen)

```cpp

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *result=NULL;
if(head1==NULL){
    return head2;
}else if(head2==NULL){
    return head1;
}


    if(head1->data <= head2->data){
        result = head1;
        result->next = mergeLists(head1->next, head2);
    }else{
        result = head2;
        result->next = mergeLists(head1, head2->next);
    }

return result;
}

```