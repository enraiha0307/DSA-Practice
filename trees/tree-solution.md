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

- [Tree : Top View](https://www.hackerrank.com/challenges/tree-top-view/problem?isFullScreen=true)

    ```cpp
        void topView(Node * root) {
            map<int,int> mpp; 
            queue<pair<Node*, int>> q; 
            q.push({root, 0}); 
            while(!q.empty()) {
                auto it = q.front(); 
                q.pop(); 
                Node* node = it.first; 
                int line = it.second; 
                if(mpp.find(line) == mpp.end()) mpp[line] = node->data; 
                
                if(node->left != NULL) {
                    q.push({node->left, line-1}); 
                }
                if(node->right != NULL) {
                    q.push({node->right, line + 1}); 
                }
                
            }
            
            for(auto it : mpp) {
                cout<<it.second<<" "; 
            }
            

        }
    ```

- [Binary Search Tree : Insertion](https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem?isFullScreen=true&h_r=next-challenge&h_v=zen)

    ```cpp
        Node * insert(Node * root, int data) {
            
            if(root==NULL) {
                Node *tmp = new Node(data);
                return tmp;
            }
            
            if(data<root->data){
                root->left = insert(root->left, data);
            }else if(data>root->data){
                root->right = insert(root->right, data);
            }
            
            return root;
        }
    ```