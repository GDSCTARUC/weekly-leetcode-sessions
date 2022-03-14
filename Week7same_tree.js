var isSameTree = function(p, q) {
    if(!p && !q){
        return true;
    }
    
    if(!p || !q || p.val !== q.val ){
        return false;
    }
    
    //recursively call children
    return isSameTree(p.left, q.left) && isSameTree(p.right, q.right)
};
