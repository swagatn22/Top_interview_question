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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start = 0;
        int last = nums.size()-1;
        return buildBST(nums,start,last);
        
    }
    TreeNode *buildBST(vector<int>& nums, int start, int last){
        if(start > last ){
            return NULL;
        }
        int mid = (start+last+1)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = buildBST(nums,start,mid-1);
        root->right = buildBST(nums,mid+1,last);
        return root;
    }
};
