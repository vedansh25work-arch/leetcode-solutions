/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(NULL), right(NULL) {}
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool isleaf(TreeNode* node) {
        return node != NULL && node->left == NULL && node->right == NULL;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        TreeNode* temp= root;
         if(temp==NULL ) return 0;
        int sum =0;
       if(isleaf(root->left))sum+=root->left->val;

       sum+=sumOfLeftLeaves(root->left);
       sum+=sumOfLeftLeaves(root->right);
        return sum ;

    }
};