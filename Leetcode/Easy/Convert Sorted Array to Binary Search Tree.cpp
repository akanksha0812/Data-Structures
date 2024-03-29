/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
     TreeNode* ArrayToBST(vector<int>& nums , int low ,int high){
          if(high <= low) return NULL;
          int mid = (high+low)/2;
          TreeNode* root = new TreeNode(nums[mid]);
          root->left = ArrayToBST(nums ,low , mid);
          root->right = ArrayToBST( nums ,mid+1, high);
          return root;
     }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return ArrayToBST(nums , 0 ,nums.size());
    }
};