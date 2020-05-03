/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* root) {
     
     vector<int> v;
     if (root == NULL)
        return v;
    stack<TreeNode *> s;
    do
    {
        // Move to leftmost node
        while (root)
        {
            // Push root's right child and then root to stack.
            if (root->right)
                s.push(root->right);
            s.push(root);
 
            // Set root as root's left child  
            root = root->left;
        }
 
        // Pop an item from stack and set it as root    
        root = s.top();
        s.pop();
        // If the popped item has a right child and the right child is not
        // processed yet, then make sure right child is processed before root
        if (root->right && s.top() == root->right)
        {
            s.pop();  // remove right child from stack
            s.push(root);  // push root back to stack
            root = root->right; // change root so that the right 
                                // child is processed next
        }
        else  // Else print root's data and set root as NULL
        {
            v.push_back(root->val);
            root = NULL;
        }
    } while (!s.empty());
    return v;
}
