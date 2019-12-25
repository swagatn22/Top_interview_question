/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>> res;
        if(!root) return res;
        vector<int> ans;
        queue<TreeNode *> newq;
        q.push(root);
        TreeNode* temp;
        while(!q.empty()){
            temp = q.front();
            q.pop();
            ans.push_back(temp->val);
            if(temp->left != NULL){
                newq.push(temp->left);
            }
            if(temp->right != NULL){
                newq.push(temp->right);
            }
            if(q.empty()){
                res.push_back(ans);
                ans.clear();
                q.swap(newq);
            }
        }
        return res;
    }
};
