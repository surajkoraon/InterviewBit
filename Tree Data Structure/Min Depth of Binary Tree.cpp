/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
    if(A==NULL)
        return 99999999;
    if(A->left==NULL && A->right==NULL)
        return 0;
    return min(minDepth(A->left)+1,minDepth(A->right)+1);
}
