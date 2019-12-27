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
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return 0;
        stack<TreeNode*> s;
        int i = 0;
        int a = 0;
        while(1){
            while(root != NULL){
                s.push(root);
                root = root->left;
            }
            if(s.empty() || i == k){
                break;
            }
            root = s.top();
            a = root->val;
            i++;
            root = root->right;
            s.pop();
        }
        return a;
    }
};
