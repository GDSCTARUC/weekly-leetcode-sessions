
//https://leetcode.com/problems/symmetric-tree/

var isSymmetric = function(root) {
    if(!root)return true;
    
    return helper(root.left, root.right);
};

var helper = (leftNode, rightNode) => {
    if(!leftNode && !rightNode){
        return true;
    }else if(!leftNode || !rightNode || leftNode.val!==rightNode.val){
        return false;
    }
    
    //recursively check for subtrees
    return helper(leftNode.left,rightNode.right) && helper(leftNode.right,rightNode.left);
    
}
