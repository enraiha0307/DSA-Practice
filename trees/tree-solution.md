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