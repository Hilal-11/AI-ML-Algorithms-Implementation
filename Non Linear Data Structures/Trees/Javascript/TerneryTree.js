
class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.mid = null;
        this.right = null;
    }
}

root = new Node(10);
root.left = new Node(11);
root.mid = new Node(12);
root.right = new Node(13)

console.log(root.data)
console.log(root.left.data)
console.log(root.right.data)