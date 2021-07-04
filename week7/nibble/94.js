var inorderTraversal = function (root) {
    let answer = [];

    function inorder(root) {
        if (!root) return;
        inorder(root.left);
        answer.push(root.val);
        inorder(root.right);
    }

    inorder(root);
    return answer;
};