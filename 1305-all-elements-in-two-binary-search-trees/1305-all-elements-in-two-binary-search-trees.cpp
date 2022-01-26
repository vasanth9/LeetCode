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
    vector<int> sol;
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        printElem(root1);
        printElem(root2);
        sort(sol.begin(),sol.end());
        return sol;
    }
    void printElem(TreeNode* root){
        if (!root) return;
        printElem(root->left);
        sol.push_back(root->val);
        printElem(root->right);
        
    }
};