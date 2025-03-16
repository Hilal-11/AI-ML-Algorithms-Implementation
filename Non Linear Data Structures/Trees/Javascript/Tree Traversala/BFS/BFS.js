class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;

    }
}

function levelOrderTraversal(root) {
    if(root == null) return;
    let queue = [];
    queue.push(root);

    while(queue.length > 0) {
        let node = queue.shift();
        console.log(node.data);
        if(node.left != null) queue.push(node.left);
        if(node.right != null) queue.push(node.right);
    }
}

root = new Node(10);
root.left = new Node(11);
root.right = new Node(22);


levelOrderTraversal(root);