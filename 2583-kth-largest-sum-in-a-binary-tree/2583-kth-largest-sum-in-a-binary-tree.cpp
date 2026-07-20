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

    long long kthLargestLevelSum(TreeNode* root, int k) {
       vector<long long> ans;
       queue<TreeNode*> q;
       q.push(root);

       while(!q.empty()){
            long long s=0;
            int a=q.size();
            for(int i=0; i<a; i++){
                TreeNode* curr = q.front();
                q.pop();
                
                s+=curr->val;
                if(curr->left != nullptr){
                    q.push(curr->left);
                }
                if(curr->right != nullptr){
                    q.push(curr->right);
                }
            }
            ans.push_back(s);
        }
        sort(ans.begin(), ans.end());
        int n = ans.size() - k;
        if(ans.size() < k){
            return -1;
        }
        else{
            return(ans[n]);
        }


    }
};