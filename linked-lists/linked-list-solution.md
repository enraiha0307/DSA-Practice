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