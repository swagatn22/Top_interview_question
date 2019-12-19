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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode *>s;
        while(1){
            while(root!= NULL){
                s.push(root);
                root = root->left;
            }
            if(s.empty()){
                return v;
            }
            root = s.top();
            v.push_back(root->val);
            s.pop();
            root = root->right;
        }
    }
};
