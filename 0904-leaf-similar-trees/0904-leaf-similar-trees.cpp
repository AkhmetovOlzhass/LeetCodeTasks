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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        return getVector(root1) == getVector(root2);
    }

    vector<int> getVector(TreeNode* root){
        vector<int> res;
        if(root == NULL){
            return res;
        }
        if(root -> left == NULL && root -> right == NULL){
            res.push_back(root->val);
            return res;
        }

        vector<int> left = getVector(root->left);
        vector<int> right = getVector(root->right);

        res.insert(res.end(), left.begin(), left.end());
        res.insert(res.end(), right.begin(), right.end());

        return res;

    }
};