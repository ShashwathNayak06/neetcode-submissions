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

    void dfs(TreeNode* root, int low, int high) {
        if(root == NULL) return;
        
        if(root -> val <= high && root -> val >= low) {
            sum += root -> val;
        }

        dfs(root -> right,low,high);
        dfs(root -> left,low, high);
    }

    int sum;
    int rangeSumBST(TreeNode* root, int low, int high) {
        TreeNode* temp = root;
        sum = 0;
        dfs(root, low, high);

        return sum;
        
    }
};