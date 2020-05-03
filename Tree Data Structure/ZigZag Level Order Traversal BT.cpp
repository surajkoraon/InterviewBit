/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int> >s;
    vector<int> v;
    int x=1,y=0,z=0;
    queue<TreeNode*> q;
    q.push(A);
    int j=0;
    while(!q.empty())
    {
        y++;
        TreeNode* tmp;
        tmp=q.front();
        v.push_back(tmp->val);
        q.pop();
        if(tmp->left)
        {
            q.push(tmp->left);
            z++;
        }
        if(tmp->right)
        {
            q.push(tmp->right);
            z++;
        }
        if(x==y)
        {
            s.push_back(v);
            x=z;
            z=0;
            y=0;
            v.clear();
        }
    }
    for(j=0;j<s.size();j++)
    {
        if(j%2)
            reverse(s[j].begin(),s[j].end());
    }
    return s;
}
