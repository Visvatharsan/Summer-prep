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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> abc;
        if(root == nullptr){
            return abc;
        }
        vector<vector<int>> lot;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> x;
            int s = q.size();
            for(int i=0;i<s; i++){
                TreeNode* curr = q.front();
                q.pop();
                x.push_back(curr->val);
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            lot.push_back(x);
        }

        for(int i=0; i<lot.size(); i++){
            int x=lot[i].size();
            abc.push_back(lot[i][x-1]);
        }
        return abc;
    }
};