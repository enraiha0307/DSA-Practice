# Problems

- [Tree: Preorder Traversal](https://www.hackerrank.com/challenges/tree-preorder-traversal/problem?isFullScreen=true)

    ```cpp

    void preOrder(Node *root) {
            if(root==NULL) return;
            cout<<root->data<< " ";
            preOrder(root->left);
            preOrder(root->right);
        }

    ```

- [Tree: Postorder Traversal](https://www.hackerrank.com/challenges/tree-postorder-traversal/problem?isFullScreen=true&h_r=next-challenge&h_v=zen)

    ```cpp

    void postOrder(Node *root) {
        if(root==NULL) return;
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }

    ```

- [Tree: Inorder Traversal](https://www.hackerrank.com/challenges/tree-inorder-traversal/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen)

    ```cpp

    void inOrder(Node *root) {
        if(root==NULL) return;
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }


    ```
 
 - [Tree: Height of a Binary Tree](https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen)

    ```cpp
    int height(Node* root) {
        // Write your code here.
        if(root==NULL) return -1;
        else{
            int lDepth = height(root->left);
            int rDepth = height(root->right);
            
            if(lDepth>rDepth){
                return (1+lDepth);
            }else{
                return (1+rDepth);
            }
        }

    ```

- [Tree: Level Order Traversal](https://www.hackerrank.com/challenges/tree-level-order-traversal/problem?isFullScreen=true)

    ```cpp
    void levelOrder(Node * root) {
        if(root==NULL)return;
        queue<Node*> q;
        q.push(root);
        
        while(q.empty()==false){
            Node* newNode = q.front();
            cout<<newNode->data<<" ";
            q.pop();
            
            if(newNode->left!=NULL){
                q.push(newNode->left);
            }      
            
            if(newNode->right!=NULL){
                q.push(newNode->right);
            }
        }
        }

    ```