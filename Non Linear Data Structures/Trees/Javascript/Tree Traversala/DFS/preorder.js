

class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

function preOrderTraversal(root) {
    if(root == null) return;

    console.log(root.data);
    preOrderTraversal(root.left);
    preOrderTraversal(root.right);
}


root = new Node(10);
root.left = new Node(11);
root.right = new Node(22);

preOrderTraversal(root);
// console.log(root.data)
// console.log(root.left.data)
// console.log(root.right.data)
