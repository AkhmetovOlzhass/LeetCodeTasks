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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        int levelCounter = 1;

        queue<TreeNode*> q;

        q.push(root);
        int maxSum = root->val;
        int maxLevel = levelCounter;

        while(!q.empty()){
            int levelSum = 0;
            int levelSize = q.size();

            for(int i = 0; i<levelSize; i++){
                TreeNode* node = q.front();
                q.pop();

                levelSum += node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node-> right);
            }

            if(maxSum < levelSum){
                maxSum = levelSum;
                maxLevel = levelCounter;
            }

            levelCounter++;
        }

        return maxLevel;
    }
};