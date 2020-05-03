/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void fun(TreeNode* A,int B,vector<vector<int> > &s,vector<int> &v)
 {
     if(!A)
        return;
    vector<int> tmp;
    tmp=v;
    tmp.push_back(A->val);
    if(B-A->val==0)
    {
        if(A->left==NULL && A->right==NULL)
        {
            s.push_back(tmp);
            return;
        }
    }
    fun(A->left,B-A->val,s,tmp);
    fun(A->right,B-A->val,s,tmp);
 }
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int> > s;
    vector<int> v;
    fun(A,B,s,v);
    return s;
}
