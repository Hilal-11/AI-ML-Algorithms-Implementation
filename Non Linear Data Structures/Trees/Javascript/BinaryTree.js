
class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null
    }
}

root = new Node(10)
root.left = new Node(20)
root.right = new Node(30)


console.log(root.data)
console.log(root.left.data)
console.log(root.right.data)