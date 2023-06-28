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

- [Position from tail](https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen)

    ```cpp
    int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode *prev, * cur;
    prev=llist,cur=llist;
    int i=0;
    if (positionFromTail==0){
        while(llist->next!=NULL){
            llist=llist->next;
        }
        return llist->data;
    }else{
        while(i<positionFromTail){
        cur = cur->next;
        i++;
    }
    while(cur->next != NULL){
        prev = prev->next;
        cur=cur->next;
    }
    return prev->data;
    }
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

- [Detect Cycle in a Linked List](https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem?isFullScreen=true)

    ````cpp
    // Using Floyd Cycle finding Algorithm
    // Uses a slow ptr and a fast ptr
    bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* slow;
    SinglyLinkedListNode* fast;

    slow = fast= head;

    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
        
    }
    return false;

    }
    ```

- [Find Merge Point of Two Lists](https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem?isFullScreen=true&h_r=next-challenge&h_v=zen)

    ```cpp

    // two pointer technique
    int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *ptr1, *ptr2;
    ptr1 = head1;
    ptr2= head2;

    while(ptr1 != ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        
        if(ptr1==ptr2){
            return ptr1->data;
        }
        
        if(ptr1==NULL){
            ptr1=head2;
        }
        
        if(ptr2==NULL){
            ptr2=head1;
        }
    }
    return ptr1->data;
    }
    ```

- [Inserting a Node Into a Sorted Doubly Linked List](https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen)

    ```cpp

    DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
        DoublyLinkedListNode* ptr = llist;
        DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
        if(llist == NULL){
            llist = newNode;
        }else if(newNode->data <= ptr->data){
            newNode->next = ptr;
            newNode->next->prev = newNode;
            llist = newNode;
        }else{
            ptr = llist;
        while(ptr->next!=NULL && ptr->next->data < newNode->data ){
            ptr = ptr->next;
            }
            newNode->next = ptr->next;
            if(ptr->next!=NULL){
                newNode->next->prev = newNode;
            }
            
            ptr->next = newNode;
            newNode->prev = ptr;
        
        }
        return llist;
    }

    ```