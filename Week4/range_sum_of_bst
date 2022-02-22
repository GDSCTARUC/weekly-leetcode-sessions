//https://leetcode.com/problems/range-sum-of-bst/

//recursive solution
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        DFS(root, low, high);
        
        return sum;
    }
    
private:
    int sum = 0;
    
    void DFS(TreeNode* root, int low, int high){
        
        if(!root){
            return;
        }
        
        if(root->val >= low && root->val <= high){
            sum += root->val;
        }
        
        if(root->val >low){
            DFS(root->left, low, high);
        }
        
        if(root->val < high){
            DFS(root->right, low, high);
        }
    }
};



// iterative solution
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        if(!root)return 0;
        
        int sum = 0;
        stack<TreeNode*> numStack;
        
        numStack.push(root);
        
        // traverse it's children
        while(!numStack.empty()){
            TreeNode* curr = numStack.top();
            numStack.pop();
            
            if(curr->val >= low && curr->val <= high){
                sum += curr->val;
            }
            
            if(curr->val < high && curr-> right){
                numStack.push(curr->right);
            }
            
            if(curr->val > low && curr-> left){
                numStack.push(curr->left);
            }

        }
        
        return sum;
    }
};
