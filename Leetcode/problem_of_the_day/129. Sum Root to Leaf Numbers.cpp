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
    int sumNumbers(TreeNode* root) {
        int totalSum = 0;
        queue<pair<TreeNode*, int>> q; // <TreeNode*, sumSoFar>
        q.push({root, 0});

        while(!q.empty()){
            auto [root, currentSum] = q.front(); q.pop();
            currentSum = currentSum*10 + root->val;
            if(root->left==NULL && root->right==NULL) totalSum += currentSum;

            if(root->left) q.push({root->left, currentSum});
            if(root->right) q.push({root->right, currentSum});
        }
        return totalSum;
    }
};
