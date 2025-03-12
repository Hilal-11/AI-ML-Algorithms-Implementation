


class Node{
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;

    }
}

function postOrderTraversal(root) {
    if(root == null) return;

    postOrderTraversal(root.left);
    postOrderTraversal(root.right);
    console.log(root.data);
}

root = new Node(10)
root.left = new Node(11);
root.right = new Node(22);

postOrderTraversal(root)