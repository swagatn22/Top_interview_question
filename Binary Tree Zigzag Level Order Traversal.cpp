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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*>perm;
        stack<TreeNode*>temp;
        perm.push(root);
        vector<vector<int>>res;
        if(!root) return res;
        vector<int>level;
        TreeNode*cur = root;
        int flag = 0;
        while(!perm.empty()){
            cur = perm.top();
            level.push_back(cur->val);
            perm.pop();
            if(flag){
                if(cur->right != NULL) temp.push(cur->right);
                if(cur->left != NULL) temp.push(cur->left);
                if(perm.empty()) flag = 0;
            }
            else{
                if(cur->left != NULL) temp.push(cur->left);
                if(cur->right != NULL) temp.push(cur->right);
                if(perm.empty()) flag = 1;
            }
            if(perm.empty()){
                swap(perm,temp);
                res.push_back(level);
                level.clear();
                
            }
            
        }
        return res;
        
    }
};
