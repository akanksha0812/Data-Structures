class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if (root == nullptr)
            return false; 

        queue<TreeNode*> q;
        q.push(root);
        int level = -1; 
        while (!q.empty()) {
            level++;
            int n = q.size();
            int prev ;
            if(level % 2 == 0)  {
                prev=INT_MIN;
            } 
            else {
                prev=INT_MAX;
            }
            for (int i = 0; i < n; i++) {
                TreeNode* ptr = q.front();
                q.pop();
                int val = ptr->val;
                if ((level % 2 == 0 && (val % 2 == 0 || val <= prev)) || 
                    (level % 2 != 0 && (val % 2 != 0 || val >= prev))) {
                    return false;
                }
                prev = val;
                if (ptr->left) {
                    q.push(ptr->left);
                }
                if (ptr->right) {
                    q.push(ptr->right);
                }
            }
        }
        return true;
    }
};
