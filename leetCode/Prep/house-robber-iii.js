/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var rob = function(root) {
    

    function dfs(node){
        if(!node) return [0,0];

        const left = dfs(node.left);
        const right = dfs(node.right);


        const notRobbing = Math.max(left[0], left[1]) + Math.max(right[0], right[1]);
        const robbing = node.val + left[0] + right[0];

        return [notRobbing, robbing];
        
    }
    const [notRobbing, robbing] = dfs(root);
    return Math.max(notRobbing, robbing);
};