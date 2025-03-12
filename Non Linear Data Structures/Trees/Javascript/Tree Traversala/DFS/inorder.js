

class Node{
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;

    }
}

function inOrderTraversal(root) {
    if(root == null) return;

    inOrderTraversal(root.left);
    console.log(root.data);
    inOrderTraversal(root.right);
}

root = new Node(10)
root.left = new Node(11);
root.right = new Node(22);

inOrderTraversal(root);
