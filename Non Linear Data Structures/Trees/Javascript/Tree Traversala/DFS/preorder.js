

class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

// preorder traversal recursively
function preOrderTraversal(root) {
    if(root == null) return;

    console.log(root.data);
    preOrderTraversal(root.left);
    preOrderTraversal(root.right);
}

// preorder traversal Iteratively
function preOrderTraversal(root){
	if(root == null) return;
	let st = [];
	st.push(root);
	
	while(st.length > 0){
		let current = st[st.length -1];
		st.pop();
		console.log(current.data);
		
		if(current.right != null) st.push(current.right);
		if(current.left != null) st.push(current.left)
	}
}

root = new Node(10);
root.left = new Node(11);
root.right = new Node(22);

preOrderTraversal(root);
// console.log(root.data)
// console.log(root.left.data)
// console.log(root.right.data)
