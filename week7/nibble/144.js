var preorderTraversal = function (root) {
    /*root => left => right*/

    let answer = [];

    function preorder(root) {
        if (!root) return [];

        answer.push(root.val);
        preorder(root.left);
        preorder(root.right);
    }

    preorder(root);
    return answer;
};