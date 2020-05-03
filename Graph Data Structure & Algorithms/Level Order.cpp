/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    queue<TreeNode*> q;
    q.push(A);
    int x=1;
    int y=0;
    int z=0;
    vector<vector<int> > v;
    vector<int> tmp;
    while(!q.empty())
    {
        y++;
        TreeNode* t=q.front();
        if(t->left)
        {
            q.push(t->left);
            z++;
        }
        if(t->right)
        {
            q.push(t->right);
            z++;
        }
        q.pop();
        tmp.push_back(t->val);
        if(y==x)
        {
            v.push_back(tmp);
            tmp.clear();
            y=0;
            x=z;
            z=0;
        }
    }
    return v;
}
